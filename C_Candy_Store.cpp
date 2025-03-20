#include <bits/stdc++.h>
using namespace std;
long long lcm(long long a, long long b)
{
    return (a / __gcd(a, b)) * b;
}

int main() {

long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
long long x;
long long y;
long long ans=1;
long long a,b;
cin>>a>>b;
x=__gcd(a*b,a*b);
y=b;
for (long long i = 1; i <n; i++)
{
    long long a,b;
    cin>>a>>b;

        x=__gcd(a*b,x);
        y=lcm(y,b);
        if(x%y==0){
            continue;
        }
        else{
            ans++;
            x=__gcd(a*b,a*b);
              y=b;
        }



    
}
cout<<ans<<endl;
}
return 0;
}