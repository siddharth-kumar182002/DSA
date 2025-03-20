#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,m;
cin>>n>>m;
vector<pair<long long,long long>> arr(n+1);
vector<long long> copy(n+1);
for (int i = 1; i <=n ; i++)
{
    long long x;
    cin>>x;
    arr[i]={x,i};
    copy[i]=x;
}
vector<set<long long>> graph(1e5);
for (int i = 0; i < m; i++)
{
    long long u,v;
    cin>>u>>v;
    graph[u].insert(v);
    graph[v].insert(u);
}
sort(arr.rbegin(),arr.rend());
long long ans=0;
for (int i = 0; i <n; i++)
{
    for(auto x:graph[arr[i].second]){
       // cout<<"in="<<x<<endl;
        ans=ans+copy[x];
        graph[x].erase(arr[i].second);
    }
    graph[arr[i].second].clear();
   // cout<<"i="<<i<<" "<<ans<<endl;
}
cout<<ans<<endl;

return 0;
}