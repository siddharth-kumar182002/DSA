#include <bits/stdc++.h>
using namespace std;

long long findXOR(long long n)
{
    if(n<=0){
        return 0;
    }
    int mod = n % 4;

    // If n is a multiple of 4
    if (mod == 0)
        return n;

    // If n % 4 gives remainder 1
    else if (mod == 1)
        return 1;

    // If n % 4 gives remainder 2
    else if (mod == 2)
        return n + 1;

    // If n % 4 gives remainder 3
    else if (mod == 3)
        return 0;
}

long long findXOR(long long l, long long r)
{
    return (findXOR(l - 1) ^ findXOR(r));
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long l,r,i,k;
cin>>l>>r>>i>>k;
long long mod=1<<i;
long long ans=findXOR(l,r);
long long x;
long long y;
//cout<<"ans="<<ans<<endl;
if((l%mod)>k){
x=(l>>i)+1;
}
else{
x=l>>i;
}
if((r%mod)>=k){
y=(r>>i);
}
else{
y=(r>>i)-1;
//cout<<"hi"<<endl;
}
//cout<<x<<" "<<y<<endl;
long long temp=findXOR(x,y);
//cout<<"temp="<<temp<<endl;
temp=temp<<i;
if((y-x+1)%2!=0){
    temp+=k;
}

ans=ans^temp;
cout<<ans<<endl;

}
return 0;
}