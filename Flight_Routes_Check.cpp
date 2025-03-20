#include <bits/stdc++.h>
using namespace std;
vector<long long > arr[100005][2];
void dfs(long long i,long long x,vector<long long> &vis){
    vis[i]=1;

    for(auto y:arr[i][x]){
        if(!vis[y]){
            dfs(y,x,vis);
        }
    }
}

int main() {
long long n,m;
cin>>n>>m;

vector<vector<long long >> arr1(n+1);
vector<vector<long long> > arr2(n+1);

for (int i = 0; i < m; i++)
{
    long long a,b;
    cin>>a>>b;

    arr[a][0].push_back(b);
    arr[b][1].push_back(a);
}
vector<long long >vis(n+1,0);
dfs(1,0,vis);
for (int i = 1; i <=n; i++)
{
    if(!vis[i]){
        cout<<"NO"<<endl;
        cout<<1<<" "<<i<<endl;
        return 0;
    }

}
vis.assign(n+1,0);
dfs(1,1,vis);
for (int i = 1; i <=n; i++)
{
    if(!vis[i]){
        cout<<"NO"<<endl;
        cout<<i<<" "<<1<<endl;
        return 0;
    }
}

cout<<"YES"<<endl;
return 0;



}