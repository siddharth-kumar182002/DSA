#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
int M=1e9+7;
class Disjointset{
public:
   vector<ll> parent,size;
   Disjointset (ll n){
    parent.resize(n+1);
    size.resize(n+1,1);
    for(ll i=0;i<=n;i++){
        parent[i]=i;
    }
   }
    ll findup(ll u){
    if(u==parent[u])return u;
    return parent[u]=findup(parent[u]);
   }
   void unionbysize(ll u,ll v){
    ll up_u=findup(u);
    ll up_v=findup(v);
    if(up_u==up_v)return;
    if(size[up_u]>size[up_v]){
        parent[up_v]=up_u;
        size[up_u]+=size[up_v];
    }
    else{
        parent[up_u]=up_v;
        size[up_v]+=size[up_u];
    }
   }
};
void dfs(ll node,ll parent,ll &time,vector<ll> &t,vector<ll> &low,vector<vector<ll>>&adj,vector<ll> &vis,vector<pair<ll,ll>> &v1){
    vis[node]=1;
    t[node]=low[node]=time;
    time++;
    for(auto it:adj[node]){
        if(it!=parent){
            if(vis[it]==0){
                dfs(it,node,time,t,low,adj,vis,v1);
                low[node]=min(low[node],low[it]);
                if(low[it]>t[node]){
                    v1.push_back({it,node});
                }
            }
            else{
                low[node]=min(low[node],low[it]);
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll k=1;
    while(k--){
        ll n,m;
        cin>>n>>m;
        vector<vector<ll>> adj(n+1);
        vector<vector<ll>> edges(m);
        for(ll i=0;i<m;i++){
            ll u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
            edges[i]={u,v};
        }
        vector<ll> vis(n+1,0);
        ll time=1;
        vector<pair<ll,ll>> v1;
        vector<ll> t(n+1,0);
        vector<ll> low(n+1,0);
        dfs(1,-1,time,t,low,adj,vis,v1);
        set<pair<ll,ll>> st;
        for(auto it:v1){
            if(it.first<=it.second){
                st.insert({it.first,it.second});
            }
            else{
                st.insert({it.second,it.first});
            }
        }
        Disjointset ds(n);
        for(auto it:edges){
            ll u=it[0];
            ll v=it[1];
            pair<ll,ll> p;
            if(u<=v)p={u,v};
            else p={v,u};
            if(st.find(p)==st.end()){
                ds.unionbysize(u,v);
            }
        }
        ll cnt=0;
        for(auto it:v1){
            ll a=ds.findup(it.first);
            ll b=ds.findup(it.second);
            cnt+=(ds.size[a]*ds.size[b]);
        }
        cout<<cnt<<endl;
    }
    
}