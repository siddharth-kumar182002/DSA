#include <bits/stdc++.h>
using namespace std;
int main() {
long long t;
cin>>t;
while(t--){
long long n,x;
cin>>n>>x;
vector<long long> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}


long long l=arr[0]-x;
long long r=arr[0]+x;
int ans=0;
for (int i = 1; i <n; i++)
{
    l=max(l,arr[i]-x);
    r=min(r,arr[i]+x);
    if(l>r){
        ans++;
        l=arr[i]-x;
        r=arr[i]+x;
    }
}
cout<<ans<<endl;
}
return 0;
}