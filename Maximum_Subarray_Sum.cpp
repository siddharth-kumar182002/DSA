#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin>>n;
    vector<long long> arr(n+1);


    for (int i = 1; i <=n; i++)
    {
        cin>>arr[i];
    }


for (int i = 0; i < n; i++)
{
    arr[i+1]=arr[i+1]+arr[i];
}

long long mini=arr[0];
long long ans=arr[1];
for (int i = 1; i <=n; i++)
{
   //mini=min(arr[i],mini);
    ans=max(ans,arr[i]-mini);
    mini=min(arr[i],mini);
}

cout<<ans<<endl;
    
return 0;
}