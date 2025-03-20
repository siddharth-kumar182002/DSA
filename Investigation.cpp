#include <bits/stdc++.h>
using namespace std;

const long long mod=1e9+7;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,m;
cin>>n>>m;
vector<vector<pair<long long,long long>>> g(n+1); 
for (int i = 0; i < m; i++)
{
 long long a,b,c;
 cin>>a>>b>>c;
g[a].push_back({b,c});
}

 priority_queue<pair<long long,long long>, vector<pair<long long,long long>>, greater<pair<long long,long long>>> pq;
vector<long long> dist(n+1,1e16);
vector<long long> ways(n+1,0);
vector<long long> maxi(n+1,-1);
vector<long long> mini(n+1,1e16);
pq.push({0,1});
dist[1]=0;
ways[1]=1;
maxi[1]=0;
mini[1]=0;

while(!pq.empty()){
 auto node=pq.top().second;
 auto d=pq.top().first;
 //cout<<node<<endl;
pq.pop();

for(auto x:g[node]){


if(dist[x.first]>(d+x.second)){
dist[x.first]=d+x.second;
ways[x.first]=ways[node];
maxi[x.first]=maxi[node]+1;
mini[x.first]=mini[node]+1;
pq.push({dist[x.first],x.first});
}
else if(dist[x.first]==(d+x.second)){
ways[x.first]=(ways[x.first]%mod+ways[node]%mod)%mod;
// maxi[x.first]+=1;
// mini[x.first]+=1;
if(maxi[x.first]<(1+maxi[node])){
    maxi[x.first]=1+maxi[node];
}
if(mini[x.first]>(1+mini[node])){
    mini[x.first]=1+mini[node];
}
}

}
}

// for(auto x:dist){
//     cout<<x<<" ";
// }
// cout<<endl;
// for(auto x:ways){
//     cout<<x<<" ";
// }
// cout<<endl;
// for(auto x:mini){
//     cout<<x<<" ";
// }
// cout<<endl;
// for(auto x:maxi){
//     cout<<x<<" ";
// }
// cout<<endl;
cout<<dist[n]<<" "<<ways[n]<<" "<<mini[n]<<" "<<maxi[n]<<endl;


return 0;
}