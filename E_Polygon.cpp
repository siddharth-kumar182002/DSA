#include <bits/stdc++.h>
using namespace std;

void bfs(long long i,long long j,vector<string> &arr){

long long  dr[2]={-1,0};
long long  dc[2]={0,-1};
long long n=arr.size();
queue<pair<long long,long long >> q;
q.push({i,j});
arr[i][j]=0;
while(!q.empty()){
auto node=q.front();
long long x=node.first;
long long y=node.second;
q.pop();
for (int i = 0; i < 2; i++)
{
    long long newx=x+dr[i];
    long long newy=y+dc[i];
    if(newx>=0 && newy>=0 && newx<n && newy<n && arr[newx][newy]=='1'){
        q.push({newx,newy});
        arr[newx][newy]='0';
    }
}


}


}
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<string> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}


for (long long i = 0; i <n; i++)
{
    if(arr[n-1][i]=='1'){
        bfs(n-1,i,arr);
    }
    if(arr[i][n-1]=='1'){
        bfs(i,n-1,arr);
    }
}
int f=0;
for (int i = 0; i <n; i++)
{
    for (int j = 0; j <n; j++)
    {
        if(arr[i][j]=='1'){
            f=1;
            cout<<"NO"<<endl;
          //  cout<<i<<j<<endl;
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


}
return 0;
}