#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,m;
cin>>n>>m;
vector<set<long long>> g(n+1);
for (int i = 0; i < m; i++)
{
    long long u,v;
    cin>>u>>v;
    g[u].insert(v);
    g[v].insert(u);
}
map<long long,long long> mp;
for (int i = 2; i <=n; i++)
{
    long long f=0;
    long long count=g[i].size();
    for(auto x:g[i]){
        if(x==1){
            f=1;
            break;
        }
    }
    if(f==1){
        count--;
        if(count%2!=0){
            mp[i]=1;
        }
        continue;
    }
    if((count%2)==0){
        mp[i]=1;
    }
}
vector<pair<long long,pair<long long,long long>>> ans;

for (int i = 2; i <=n; i++)
{ 
    for(auto x:g[i]){
        if(x==1){
         
            continue;
        }
        ans.push_back({1,{i,x}});
        g[x].erase(i);
    }
   
}
long long c=-1;
for (int i = 2; i <=n; i++)
{
    if(mp[i]!=1){
        c=i;
        break;
    }
}
//cout<<c<<endl;
if(c!=-1){
for(auto x:mp){
    if((x.second)==1){
    ans.push_back({1,{c,x.first}});
    c=x.first;
    }
}
}


cout<<ans.size()<<endl;
for(auto x:ans){
    cout<<x.first<<" "<<x.second.first<<" "<<x.second.second<<endl;
}

}
return 0;
}