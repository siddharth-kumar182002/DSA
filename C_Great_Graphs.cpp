#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long> arr(n);
for (int i = 0; i <n; i++)
{
    cin>>arr[i];
}
sort(arr.begin(),arr.end());
// for(auto x:arr){
//     cout<<x<<" ";
// }
// cout<<endl;
long long sum=accumulate(arr.begin(),arr.end(),0LL);
//cout<<"sum="<<sum<<endl;
long long ans=0;
long long x=0;
for (int i = 0; i <n; i++)
{
    x=x+arr[i];
    ans=ans-(sum-x-(n-i-1)*arr[i]);
    //cout<<ans<<endl;
}
ans=ans+arr[n-1];
cout<<ans<<endl;
// long long y=0-arr[2]-arr[3]-arr[4]-(arr[3]-arr[1])-(arr[4]-arr[1])-(arr[4]-arr[2]);
// cout<<y<<endl;
}
return 0;
}