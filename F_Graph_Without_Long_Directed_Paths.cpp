#include <bits/stdc++.h>
using namespace std;
long long n=2e5+5,m;
vector<vector<long long>> graph(n);
vector<long long> col(n,-1);
vector<bool> vis(n);
bool dfs(long long root){
vis[root]=1;
for(auto adj: graph[root]){
    if(col[adj]==col[root]){
        return false;
    }
     else if(!vis[adj]){
    col[adj]=!col[root];
    if(!dfs(adj)){
        return false;
    }
}
}
return true;
}
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
cin>>n>>m;
vector<vector<long long>> p;
for (int i = 0; i < m; i++)
{
    long long u,v;
    cin>>u>>v;
    graph[u].push_back(v);
    graph[v].push_back(u);
    p.push_back({u,v});
}

col[1]=0;
if(!dfs((1))){
cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
string s="";
for (int i = 0; i < m; i++)
{
    long long u=p[i][0];
    long long v=p[i][1];
    if(col[u]==0){
           s+="1";
    }
    else{
         s+="0";
    }

}
cout<<s;
}


return 0;
}