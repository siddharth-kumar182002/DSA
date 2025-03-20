#include <bits/stdc++.h>
using namespace std;
vector<bool> isprime; 
void primecheck(long long  n){ 
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
int t;
cin>>t;
primecheck(1e6+1);
while(t--){
long long n,e;
cin>>n>>e;
vector<long long> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
vector<long long> prf(n,0);
vector<long long > suff(n,0);
for (int i = 0; i < n; i++)
{
    if(arr[i]==1){
        if(i-e>=0){
        prf[i]=prf[i-e]+1;
        }
        else{
            prf[i]=1;
        }
    }

}
for (int i = n-1; i >=0; i--)
{
    if(arr[i]==1){
        if(i+e<n){
        suff[i]=suff[i+e]+1;
        }
        else{
            suff[i]=1;
        }
    }
}

long long ans=0;
for (int i = 0; i < n; i++)
{
    if(isprime[arr[i]]){
        long long a=0;
           if(i-e>=0 && arr[i-e]==1){
            a=a+prf[i-e];
           }
           long long b=0;
           if(i+e<n && arr[i+e]==1){
            b=b+suff[i+e];
           }
           ans=ans+a+b;
           if(a!=0){
            ans=ans+a*b;
           }
    }
}
cout<<ans<<endl;



 
}
return 0;
}