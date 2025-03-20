#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,m;
cin>>n>>m;

vector<vector<long long>> arr(n,vector<long long> (m));
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        cin>>arr[i][j];
    }
    
}

int dr[4]={-1,0,1,0};
int dc[4]={0,1,0,-1};
for (int i = 0; i < n; i++)
{
    for (int j = 0; j <m; j++)
    {
        long long maxi=-1;
        long long f=0;
          for (int k = 0; k < 4; k++)
          {
              long long nr=i+dr[k];
              long long nc=j+dc[k];
              if(nr>=0 && nc>=0 && nr<n && nc<m ){
                          if(arr[i][j]<=arr[nr][nc]){
                            f=1;
                                break;
                          }
                          else{
                            maxi=max(maxi,arr[nr][nc]);
                          }
              }
          }
          if(f==0){
               arr[i][j]=maxi;
          }
          
    }
    
}
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}



}
return 0;
}