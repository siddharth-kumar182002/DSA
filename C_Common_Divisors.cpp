#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n;
cin>>n;
//vector<long long> arr(n);
long long x=0;
for (int i = 0; i < n; i++)
{
    long long temp;
    cin>>temp;
    x=__gcd(x,temp);
}
long long ans=0;
for (long long i = 1; i*i<=x; i++)
{
    if(x%i==0){
        if(x/i==i){
            ans++;
        }
        else{
            ans+=2;
        }
    }
}
cout<<ans<<endl;




return 0;
}