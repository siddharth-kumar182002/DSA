#include <bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
void dfs(long long i,vector<long long> graph[],vector<long long> &vis) {
vis[i]=1;

for(auto x:graph[i]){
   if(!vis[x]){
    dfs(x,graph,vis);
   }
}
}
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<vector<long long>> arr(2,vector<long long> (n));


for (int i = 0; i < 2; i++)
{
 for (int j = 0; j< n; j++)
 {
  cin>>arr[i][j];

 }
}
vector<long long> graph[n+1];
for (int i = 0; i < n; i++)
{
    graph[arr[0][i]].push_back(arr[1][i]);
    graph[arr[1][i]].push_back(arr[0][i]);
}

vector<long long> vis(n+1,0);
long long count=0;
for (int i = 1; i <=n; i++)
{
    if(!vis[i]){
        count++;
        dfs(i,graph,vis);
    }
}
//cout<<count<<endl;
//2^n;

long long ans=1;

while(count--){
    ans=((ans*2)%mod);
}
cout<<ans<<endl;


}
return 0;
}