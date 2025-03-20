#include <bits/stdc++.h>
using namespace std;
long long start=-1;
long long endi=-1;
bool dfs(long long node, vector<long long> graph[], vector<long long> &vis,vector<long long> &par){
    vis[node]=1;
//cout<<node<<endl;
    for(auto x : graph[node]){
        if(!vis[x]){
            par[x]=node;
            //cout<<"xin"<<x<<endl;
            if(dfs(x,graph,vis,par)){
                return true;
            }
        }
        else if(par[node]!=x){
            start=x;
            endi=node;
            return true;
        }
    }

    return false;
}
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

vector<long long> vis(n+1,0);
vector<long long> par(n+1);
for (int i = 0; i <=n; i++)
{
    par[i]=i;
}

long long f=0;
for (int i = 1; i <=n; i++)
{
    if(!vis[i]){
       if(dfs(i,graph,vis,par)){
        f=1;
        break;
       }
    }
}
if(f==0){
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}
vector<long long > path;
long long last=endi;
while(endi!=start){
   path.push_back(endi);
    endi=par[endi];
}
path.push_back(start);
path.push_back(last);
cout<<path.size()<<endl;
for(auto x:path){
    cout<<x<<" ";
}
cout<<endl;



return 0;
}