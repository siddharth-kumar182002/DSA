#include <bits/stdc++.h>
using namespace std;
int main() {
long long n,m;
cin>>n>>m;
vector<long long > arr(n);
vector<long long> brr(m);
for (int i = 0; i < n; i++)
{
cin>>arr[i];
}
for (int i = 0; i < m; i++)
{
cin>>brr[i];
}

sort(arr.begin(),arr.end());

sort(brr.begin(),brr.end());

if(brr[0]<arr[n-1]){
cout<<-1<<endl;
}
else{
    long long ans=0;
    for (int i = 0; i < m; i++)
    {
        ans=ans+brr[i];
    }

    for (int i = 0; i < n-1; i++)
    {
        ans=ans+m*arr[i];
    }
    //ans=ans+arr[n-1];
if(arr[n-1]==brr[0]){
    cout<<ans<<endl;
}else{
    ans=ans-brr[0]+arr[n-1]-arr[n-2]+brr[0];
    cout<<ans<<endl;
}
    
}

return 0;
}