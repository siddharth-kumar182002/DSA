#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long> indegree(n+1,0);
int f=0;
vector<long long> graph[n+1];
vector<pair<long long,long long> > edges(n);
for (int i = 0; i <n-1; i++)
{
    long long a,b;
    cin>>a>>b;
    edges[i]={a,b};
    graph[a].push_back(b);
    graph[b].push_back(a);
indegree[a]++;
indegree[b]++;
if(indegree[a]>2 || indegree[b]>2){
    f=1;
}
}
if(f==1){
    cout<<-1<<endl;
}
else{
     map<pair<long long,long long>,long long> ans;
    for (int i = 1; i <=n; i++)
    {
        if(indegree[i]==1){
            queue<pair<long long,long long>> q;
            vector<long long> vis(n+1,0);
            q.push({i,0});
            vis[i]=1;
            while(!q.empty()){
                 auto node=q.front();
                 //cout<<node.first<<" "<<node.second<<endl;
                 q.pop();
                 for(auto x:graph[node.first]){
                    if(!vis[x]){
                    ans[{node.first,x}]=node.second;
                    ans[{x,node.first}]=node.second;
                   // cout<<ans[{node.first,x}]<<endl;
                    q.push({x,!node.second});
                    vis[x]=1;
                    }
                 }
            }
            break;
        }
    }

    for (int i = 0; i < n-1; i++)
    {
        
        if(ans[{edges[i].first,edges[i].second}]==0){
            cout<<2<<" ";
        }
        else{
            cout<<5<<" ";
        }
    }
    
    cout<<endl;
}


}
return 0;
}