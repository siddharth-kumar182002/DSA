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
    //cout<<arr[i]<<endl;
}
sort(arr.begin(),arr.end());
long long group=1;
vector<long long> ans;

for (int i = 1; i < n; i++)
{
    while((arr[i]-arr[i-1]<=k) && i<n){
       group++;
       i++;
    }
    if(i==n){
        break;
    }
    ans.push_back(group);
   group=1;
}
ans.push_back(group);
sort(ans.begin(),ans.end());
long long fin=0;
for (int i = 0; i < ans.size()-1; i++)
{
    fin+=ans[i];
}
cout<<fin<<endl;
}
return 0;
}