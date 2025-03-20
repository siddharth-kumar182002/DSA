#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,m;
cin>>n>>m;
vector<vector<pair<long long,long long>>> graph(n+1);
for (int i = 0; i < m; i++)
{
    long long a,b,c;
    cin>>a>>b>>c;
    graph[a].push_back({b,c});
}

priority_queue<pair<long long,long long>,vector<pair<long long ,long long>>,greater<pair<long long,long long>>> pq;

vector<long long> dist(n+1,1e17);
dist[1]=0;
pq.push({0,1});
while(!pq.empty()){

    auto node=pq.top();
    pq.pop();
if(dist[node.second]!=node.first){
    continue;
}

for(auto x:graph[node.second]){

    if(dist[x.first]>(dist[node.second]+x.second)){
        dist[x.first]=(dist[node.second]+x.second);
        pq.push({dist[x.first],x.first});
    }
}



}

for (int i = 1; i <=n; i++)
{
   cout<<dist[i]<<" ";
}
cout<<endl;


return 0;
}