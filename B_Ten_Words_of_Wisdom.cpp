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
vector<pair<long long,long long>> mp;
map<long long,long long> m;
for (int i = 0; i < n; i++)
{
    long long a,b;
    cin>>a>>b;
    mp.push_back({a,b});
    m[b]=i+1;
}
sort(mp.begin(),mp.end());
long long ans=0;
for (int i = 0; i < n; i++)
{
    if(mp[i].first>10){
        break;
    }
    ans=max(ans,mp[i].second);
}
cout<<m[ans]<<endl;

}
return 0;
}