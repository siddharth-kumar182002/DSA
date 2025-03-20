#include <bits/stdc++.h>
using namespace std;


long long cstart, ced;
bool dfs(long long node,vector<long long> &color, vector<long long> &parent,vector<vector<long long>>  &g){

color[node]=1;
for(auto x:g[node]){
    if(color[x]==0){
         parent[x]=node;
          if(dfs(x,color,parent,g)){
            return true;
          }
    }
    else if(color[x]==1){
        cstart=x;
        ced=node;
        return true;
    }
}

color[node]=2;

return false;

}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,m;

cin>>n>>m;
vector<vector<long long>>  g(n+1);
for (int i = 0; i < m; i++)
{
    long long x,y;
    cin>>x>>y;
    g[x].push_back(y);
}

vector<long long> color(n+1,0);
vector<long long> parent(n+1,-1);
cstart=-1;
for (int i = 1; i <=n; i++)
{
    if(color[i]==0 && dfs(i,color,parent,g)){
        break;
    }
}
cout<<cstart<<" "<<ced<<endl;
if(cstart==-1){
    cout<<"IMPOSSIBLE"<<endl;
}
else{
  //  cout<<"YES"<<endl;
    vector<long long> ans;
    ans.push_back(cstart);
    while(ced!=cstart){
        ans.push_back(ced);
        ced=parent[ced];
    }
    ans.push_back(cstart);
    reverse(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for(auto x:ans){
        cout<<x<<" ";
    }
    cout<<endl;

}



return 0;
}