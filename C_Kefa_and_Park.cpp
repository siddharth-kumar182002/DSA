#include <bits/stdc++.h>
using namespace std;

long long dfs(long long root,long long count,vector<long long> park[], vector<long long > &cat,vector<long long> &vis,long long m){
vis[root]=1;
long long c=count;
if(park[root].size()==1 && root!=1){
    if(count>m){
        return 0;
    }
    else{
        return 1;
    }
}
long long ans=0;
for(auto x: park[root]){
    if(!vis[x]){
        //cout<<"x="<<x<<endl;
        if(cat[x]==1){
          //  cout<<"xin="<<x<<endl;
            c++;
        }
        else{
            c=0;
        }
        if(count>m){
          ans=ans+0;
        }
        else{
      ans=ans+ dfs(x,c,park,cat,vis,m);
        }
        c=count;
        // cout<<"count="<<count<<endl;
    }
}
//cout<<ans<<endl;

return ans;


}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,m;
cin>>n>>m;
vector<long long > cat(n+1,0);
for (int i = 1; i <=n; i++)
{
    long long x;
    cin>>x;
     cat[i]=x;
}
vector<long long> park[n+1];
for (int i = 1; i <=n-1; i++)
{
    long long a,b;
    cin>>a>>b;
      park[a].push_back(b);
      park[b].push_back(a);

}
vector<long long> vis(n+1,0);
long long root=1;
long long count=cat[1];
cout<<dfs(root,count,park,cat,vis,m)<<endl;



return 0;
}