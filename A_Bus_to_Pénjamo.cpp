#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,r;
cin>>n>>r;
vector<long long> arr(n);
for (int i = 0; i <n; i++)
{
    cin>>arr[i];
}
long long ans=0;
long long rem=0;
long long x=0;
for (int i = 0; i < n; i++)
{
    ans=ans+(arr[i]/2)*2;
    if(((arr[i]/2)*2)>=2){
        x=x+arr[i]/2;
    }
    rem=rem+arr[i]%2;
}
//cout<<x<<endl;
long long y=r-x;
//cout<<y<<" "<<ans<<endl;
if(rem>=y){
    rem=rem-y;
    ans=ans+(y-rem);
}
else{
    ans=ans+rem;
}
cout<<ans<<endl;


}
return 0;
}