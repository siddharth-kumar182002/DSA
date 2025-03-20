#include <bits/stdc++.h>
using namespace std;
int main() {
long long n,m,k;
cin>>n>>m>>k;

vector<pair<long long,long long>> arrlist[n+1];
for (int i = 0; i < m; i++)
{
     long long u,v,w;
     cin>>u>>v>>w;
     arrlist[u].push_back({v,w});
     arrlist[v].push_back({u,w});

}

vector<long long> flour;
vector<long long> vis(n+1,0);
for (int i = 0; i < k; i++)
{
    long long x;
    cin>>x;
    flour.push_back(x);
    vis[x]=1;

}
if(flour.empty()){
    cout<<-1<<endl;
    return 0;
}

vector<long long> dist(n+1);
long long ans=1e11;
for (int i =0; i <k; i++)
{
    for(auto x:arrlist[flour[i]]){
        if(!vis[x.first]){
            ans=min(ans,x.second);
        }
    }
}
if(ans==1e11){
    cout<<-1<<endl;
}
else{
cout<<ans<<endl;
}
return 0;
}