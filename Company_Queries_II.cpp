#include <bits/stdc++.h>
using namespace std;
 
 
vector<long long> tree[200001];
long long up[200001][20];
long long level[200001];
 
void dfs(long long src,long long par,long long lvl){
level[src]=lvl;
    for(auto x:tree[src]){
        if(x!=par){
            dfs(x,src,lvl+1);
        }
    }
}
 
void bili(long long src,long long par){
up[src][0]=par;
for (int i = 1; i <20; i++)
{
    if(up[src][i-1]!=-1){
         up[src][i]=up[up[src][i-1]][i-1];
    }
    else{
        up[src][i]=-1;
    }
}
 
    for(auto x:tree[src]){
        if(x!=par){
            bili(x,src);
        }
    }
}
 
long long lift(long long node,long long jump){
 
for (int i = 19; i >=0 ; i--)
{
    if(node==-1 || jump==0){
        break;
    }
 
    if(jump>=(1<<i)){
        jump=jump-(1<<i);
        node=up[node][i];
    }
}
    return node;
}
 
long long lca(long long u,long long v){
 
if(level[u]>level[v]){
    swap(u,v);
}
 
v=lift(v,(level[v]-level[u]));
if(u==v){
    return u;
}
 
for (int i = 19; i >=0 ; i--)
{
    if(up[u][i]!=up[v][i]){
        u=up[u][i];
        v=up[v][i];
    }
}
 
return lift(u,1);
 
 
}
 
 
int main() {
 
 
    long long n,q;
    cin>>n>>q;
 
    for (int u = 2; u <=n; u++)
    {
        long long v;
        cin>>v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
 
    bili(1,-1);
    dfs(1,-1,0);
for (int i = 0; i <q; i++)
{
    long long a,b;
    cin>>a>>b;
    cout<<(lca(a,b))<<endl;
}
 
    
 
return 0;
}