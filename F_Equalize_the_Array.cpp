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
map<long long,long long> mp;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    mp[arr[i]]++;
}
sort(arr.begin(),arr.end());
set<long long> sz;
for(auto x:mp){
    sz.insert(x.second);
   // cout<<x.second<<endl;
}
long long ans=1e9;

for(auto x:sz){

long long del=0;
for(auto y:mp){
    if((y.second)<x){
        del=del+y.second;
    }
    else{
        del=del+(y.second-x);
    }
}
ans=min(ans,del);

}

cout<<ans<<endl;

}
return 0;
}