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
vector<pair<long long,long long>> brr;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
for (int i = 0; i < n; i++)
{
    long long x;
    cin>>x;
    brr.push_back({arr[i],x});
}

sort(brr.begin(),brr.end());
long long ans=brr[n-1].first;
long long temp=brr[n-1].second;
for (int i = n-2; i >=0 ; i--)
{
    long long x= max(brr[i].first,(temp));
    ans=min(ans,x);
    temp=temp+brr[i].second;
}
ans=min(ans,temp);
cout<<ans<<endl;
}
return 0;
}