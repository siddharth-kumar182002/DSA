#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
vector<long long> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

sort(arr.begin(),arr.end());
long long  count=0;
long long ans=0;
vector<long long> di
for (int i = n-2; i >=0; i=i-2)
{
    ans+=arr[i+1]-arr[i];
    diff.push_back(arr[i+1]-arr[i]);
}
ans=max(0*1LL,(ans-k));
cout<<ans<<endl;

}
return 0;
}