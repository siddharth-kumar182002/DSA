#include <bits/stdc++.h>
using namespace std;

bool dfs(long long i,long long j,vector<vector<long long>> &vis, vector<string> &arr,long long pi,long long pj,long long n,long long m){
vis[i][j]=1;
//cout<<i<<" "<<j<<endl; 
int row[4]={-1,0,1,0};
int col[4]={0,1,0,-1};

        for (int del = 0; del<4; del++)
        {
           
        long long newr=i+row[del];
        long long newc=j+col[del];
       // cout<<"newr="<<newr<<" "<<"newc="<<newc<<endl;
        if(newr>=0 && newr<n && newc>=0 && newc<m && !vis[newr][newc] && (arr[newr][newc]==arr[i][j])){
            //cout<<"hi"<<endl;
            if(dfs(newr,newc,vis,arr,i,j,n,m)){
                  return true;
            }
        }
        else if (newr>=0 && newr<n && newc>=0 && newc<m && vis[newr][newc] && (arr[newr][newc]==arr[i][j]) && newr!=pi && newc!=pj){
            //cout<<"hi"<<endl;
            return true;
        }
            
        }
       // cout<<"hi"<<endl;
return false;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,m;
cin>>n>>m;
vector<string> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}


vector<vector<long long>> vis(n,vector<long long> (m,0));
int f=0;


for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        if(!vis[i][j]){
            if(dfs(i,j,vis,arr,-1,-1,n,m)){
                f=1;
                cout<<"Yes"<<endl;
                break;
            }
            vis[i][j]=1;
        }
    }
    if(f==1){
        break;
    }
    
}
if(f!=1){
    cout<<"No"<<endl;
}

return 0;
}