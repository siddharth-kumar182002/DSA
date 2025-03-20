#include <bits/stdc++.h>
using namespace std;
vector<bool> isprime; //true=prime
void primecheck(long long n){ 
    isprime.clear();
    isprime.assign(n+1,true);
    isprime[0]=false;
    isprime[1]=false;
    for (long long i=2;i*i<=n;i++){
        if (isprime[i]){
            for (long long j=i*i;j<=n;j+=i) isprime[j]=false;
        }
    }
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n;
cin>>n;
if(n==1){
    cout<<1<<" "<<0<<endl;
    return 0;
}
primecheck(n);

vector<long long> p;
long long ans=1;
long long mini=1e9;
long long maxi=-1;
for (int i = 2; i <=n; i++)
{
    //cout<<"i="<<i<<endl;
    if(isprime[i] && n%i==0){
        //cout<<i<<" "<<endl;
        p.push_back(i);
        ans=ans*i;
        long long x=0;
        long long p=n;
        while(p>1 && p%i==0){
            x++;
            p=p/i;
        }
        maxi=max(maxi,x);
        mini=min(mini,x);
    }
}
//cout<<"maxi="<<maxi<<endl;
//cout<<"mini="<<mini<<endl;
long long count=0;
long long w=1;
while(w<maxi){
    w=w*2;
    count++;
}
//cout<<count<<endl;
long long c=0;
if((mini!=maxi) || (maxi!=w)){
    c++;
}

c=c+count;
cout<<ans<<" "<<c<<endl;

return 0;
}