#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,k;
cin>>n>>k;
vector<long long> arr(n);

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

vector<long long > brr;
for (int i = 0; i < n-1; i++)
{
    brr.push_back(arr[i]-arr[i+1]);
}
sort(brr.begin(),brr.end());
long long ans=arr[n-1]-arr[0];
for (int i = 0; i <k-1; i++)
{
    ans=ans+brr[i];
}
cout<<ans<<endl;



return 0;
}