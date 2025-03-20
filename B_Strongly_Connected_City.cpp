#include <bits/stdc++.h>
using namespace std;
void dfs(long long i,long long j, vector<vector<long long>> &vis,string &h,string&v){
    vis[i][j]=1;
    long long n=h.size();
    long long m=v.size();
    long long a=i;
    long long b=j;
    //cout<<i<<" "<<j<<endl;
    if(h[a]=='>'){
        b++;
    }
    else{
        b--;
    }
//cout<<b<<endl;
    if(b>=0 && b<m && !vis[a][b]){
    dfs(a,b,vis,h,v);
    }
    if(v[j]=='^'){
        i--;
    }
    else{
        i++;
    }
    if(i>=0 && i<n && !vis[i][j]){
    dfs(i,j,vis,h,v);
    }
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,m;
cin>>n>>m;
string h,v;
cin>>h>>v;
long long f=0;

for (int i = 0; i < n; i++)
{
   
    for (int j = 0; j < m; j++)
    {
         vector<vector<long long>> vis(n,vector<long long> (m,0) );
        if(!vis[i][j]){
            dfs(i,j,vis,h,v);
        }
      //  cout<<"i"<<i<<" "<<"j="<<j<<endl;
       // cout<<count<<endl;
    for(auto x:vis){
        for(auto y:x){
            if(y==0){
                f=1;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(f==1){
            break;
        }
    }
     if(f==1){
        break;
     }

    }
    if(f==1){
        break;
    }
    
}
if(f!=1){
    cout<<"YES"<<endl;
}

return 0;
}