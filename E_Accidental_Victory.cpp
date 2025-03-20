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
vector<pair<long long,long long>> arr(n+1);
arr[0]={0,0};
for (int i = 0; i < n; i++)
{
    long long x;
    cin>>x;
    arr[i+1]={x,i+1};
}
sort(arr.begin(),arr.end());
long long l=1;

for (int i = 1; i <=n; i++)
{
    arr[i].first+=arr[i-1].first;
    if(i<n){
           if(arr[i].first<arr[i+1].first){
            l=i+1;
           }
    }

}
vector<long long> ans;
for (int i = l; i <=n; i++)
{
    ans.push_back(arr[i].second);
}

sort(ans.begin(),ans.end());
cout<<ans.size()<<endl;
for(auto x:ans){
    cout<<x<<" ";
}
cout<<endl;




}
return 0;
}