#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
vector<long long> cost(n);
for (int i = 0; i < n; i++)
{
    cin>>cost[i];
}
for (int i = 0; i < k; i++)
{
    long long x;
    cin>>x;
    x--;
    cost[x]=0;
}

vector<long long> graph[n];
vector<long long> indg(n,0);
for (int i = 0; i < n; i++)
{
    long long m;
    cin>>m;
    for (int j = 0; j < m; j++)
    {
        long long y;
        cin>>y;
        y--;
        indg[y]++;
        graph[i].push_back(y);
    }
    
}

queue<long long> q;
for (int i = 0; i < n; i++)
{
    if(indg[i]==0){
        q.push(i);
    }
}
vector<long long> topo;
while(!q.empty()){
    long long node=q.front();
    q.pop();
    topo.push_back(node);
    for(auto it: graph[node]){
            indg[it]--;
            if(indg[it]==0){
                q.push(it);
            }
    }
}

reverse(topo.begin(),topo.end());

vector<long long> ans(n);
ans=cost;

for(auto it: topo){
long long sum=0;
for(auto x:graph[it]){
sum=sum+ans[x];
}
if(graph[it].size()>0){
    ans[it]=min(ans[it],sum);
}

} 

for (int i = 0; i <n; i++)
{
    cout<<ans[i]<<" ";
}
cout<<endl;

 

}
return 0;
}