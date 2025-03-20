#include <bits/stdc++.h>
using namespace std;
long long n=3e5+10,m;
const long long mod=998244353;
vector<vector<long long> > graph(n);
vector<long long> col(n,-1);
vector<long long > vis(n);
vector<long long> power(n,1);
long long c1,c0;
bool dfs(long long root){
    vis[root]=1;
    for(auto x:graph[root]){
        if(col[x]==col[root]){
            return false;
        }
        if(!vis[x]){
            col[x]=!col[root];
            if(col[x]){
                c1++;
            }
            else{
                c0++;
            }
            if(!dfs(x)){
                return false;
            }

        }
    }
    return true;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
for (int i = 1; i <n; i++)
{
    power[i]=(power[i-1]*2)%mod;
}

int t;
cin>>t;
while(t--){
long long n,m;
cin>>n>>m;
for (int i = 1; i <=n; i++)
{
    graph[i].clear();
    col[i]=-1;
    vis[i]=0;
}
for (int i = 0; i < m; i++)
{
    long long x,y;
    cin>>x>>y;
    graph[x].push_back(y);
    graph[y].push_back(x);
}
long long ans=1;
for (int i = 1; i <=n; i++)
{
    if(!vis[i]){
         c1=1;
            c0=0;
            col[i]=1;
        if(!dfs(i)){
            ans=0;
            break;
        }
        else{
            ans=(ans*((power[c1]+power[c0])%mod))%mod;

        }
    }
}

cout<<ans<<endl;

}
return 0;
}