#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,m;
cin>>n>>m;
vector<long long> graph[n+1];

for (int i = 0; i < m; i++)
{
   long long a,b;
   cin>>a>>b;
   graph[a].push_back(b);
   graph[b].push_back(a);
}

vector<long long> dist(n+1,1e9);
queue<long long> q;
dist[1]=1;
q.push(1);
vector<long long> par(n+1,-1);
for (int i = 0; i <=n; i++)
{
    par[i]=i;
}

vector<long long> ans;
while(!q.empty()){
long long node=q.front();
q.pop();

for(auto it : graph[node]){
    if(dist[node]+1<dist[it]){
        dist[it]=dist[node]+1;
        par[it]=node;
        q.push(it);
      }
}

}

if(dist[n]==1e9){
    cout<<"IMPOSSIBLE"<<endl;
}
else{
    cout<<dist[n]<<endl;
    long long end=n;
    vector<long long> path;
    while(par[end]!=end){
        path.push_back(end);
         end=par[end];
    }
    path.push_back(1);
    reverse(path.begin(),path.end());
    for(auto x: path){
        cout<<x<<" ";
    }
    cout<<endl;
}



return 0;
}