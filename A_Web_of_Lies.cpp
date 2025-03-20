#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,m;
cin>>n>>m;
vector<set<long long>> adj(n+1);
for (int i = 0; i < m; i++)
{
    long long u,v;
    cin>>u>>v;
    adj[u].insert(v);
    adj[v].insert(u);   
}

long long ans=0;
vector<long long> is(n+1,0);
for (int i = 1; i <=n; i++)
{
    if(adj[i].lower_bound(i)==adj[i].end()){
                    is[i]=1;
                    ans++;
    }
}
long long q;
cin>>q;
while(q--){

long long type;
cin>>type;
if(type==3){
    cout<<ans<<endl;
    continue;
}
else{
long long u,v;
cin>>u>>v;

if(is[u]){
    ans--;
}
if(is[v]){
    ans--;
}

if(type==1){
    adj[u].insert(v);
    adj[v].insert(u);
}
if(type==2){
    adj[u].erase(v);
    adj[v].erase(u);
}

if(adj[u].lower_bound(u)==adj[u].end()){
is[u]=1;
}
else{
is[u]=0;
}
if(adj[v].lower_bound(v)==adj[v].end()){
is[v]=1;
}
else{
is[v]=0;
}
if(is[u]){
    ans++;
}
if(is[v]){
    ans++;
}
}





}

return 0;
}