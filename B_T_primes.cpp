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
primecheck(1e6);

long long n;
cin>>n;

for(int i=0;i<n;i++){
long long x;
cin>>x;
double y=sqrt(x);
if(y*y!=x){
cout<<"NO\n";
}
else{
    if(isprime[y]==1){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}

}
return 0;
}