#include <bits/stdc++.h>
using namespace std;
const long long N=2*1e3+10;
vector<long long> parents(N); 
vector<long long > sz(N,0);
void make(long long a){
parents[a]=a;
sz[a]=1;
}

long long find(long long a){
    if(parents[a]==a){
        return a;
    }
    return parents[a]=find(parents[a]);
}

void Union(long long a, long long b){
    long long u=find(a);
    long long v=find(b);
    if(u!=v){
    if(sz[u]<sz[v]){
        swap(u,v);
    }
    parents[v]=u;
    sz[u]=sz[u]+sz[v];
    }
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long  n;
cin>>n;
vector<pair<long long ,long long>> posn(n+1);
make(0);
for (int i = 1; i <=n; i++)
{
    long long x,y;
    cin>>x>>y;
    posn[i]={x,y};
    make(i);
}
vector<long long> cost(n+1);
for (int i = 1; i <=n; i++)
{
    cin>>cost[i];
}
vector<long long> ko(n+1);
for (int i = 1; i <=n; i++)
{
    cin>>ko[i];
}
vector<pair<long long,pair<long long,long long >>> edges;
for (int i = 1; i <=n; i++)
{
    edges.push_back({cost[i],{0*1LL,i*1LL}});
}
for (int i = 1; i <=n; i++)
{
    for (int j = i+1; j <=n; j++)
    {
        long long dist=abs(posn[i].first-posn[j].first)+abs(posn[i].second-posn[j].second);
        long long w=dist*1LL*(ko[i]+ko[j]);
         edges.push_back({w,{i*1LL,j*1LL}});
    }
    
}
sort(edges.begin(),edges.end());
long long ans=0;
vector<long long> pst;
vector<pair<long long, long long>> conn;
for (int i = 0; i <edges.size() ; i++)
{
       long long a=edges[i].first;
       long long u=edges[i].second.first;
       long long v=edges[i].second.second;
      // cout<<a<<" "<<u<<" "<<v<<endl;
       if(find(u)==find(v)){
           continue;
       }
       Union(u,v);
       ans=ans+a;
       if(u==0 || v==0){
        pst.push_back(max(u,v));
       }
       else{
        conn.push_back({u,v});
       }
}

cout<<ans<<endl;
cout<<pst.size()<<endl;
for(auto x:pst){
    cout<<x<<" ";
}
cout<<endl;
cout<<conn.size()<<endl;
for(int i=0;i<conn.size();i++){
    cout<<conn[i].first<<" "<<conn[i].second<<" "<<endl;
}
cout<<endl;







return 0;
}