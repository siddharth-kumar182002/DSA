#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,m;
cin>>n>>m;
vector<vector<long long>> g(n+1);
for (int i = 0; i < m; i++)
{
    long long x,y;
    cin>>x>>y;
    g[x].push_back(y);
}

vector<long long> indegree(n+1,0);
for (int i = 1; i <=n; i++)
{
    for(auto x:g[i]){
        indegree[x]++;
    }
}

queue<long long> q;
for (int i = 1; i <=n; i++)
{
    if(indegree[i]==0){
        q.push(i);
    }
}

vector<long long> topo;
while(!q.empty()){
    long long node=q.front();
    q.pop();
    topo.push_back(node);
    for(auto x:g[node]){
        indegree[x]--;
        if(indegree[x]==0){
            q.push(x);
        }
    }
}
if(topo.size()<n){
    cout<<"IMPOSSIBLE"<<endl;
}
else{
for(auto x:topo){
    cout<<x<<" ";
}
cout<<endl;
}

return 0;
}