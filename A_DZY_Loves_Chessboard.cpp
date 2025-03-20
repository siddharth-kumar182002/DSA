#include <bits/stdc++.h>
using namespace std;
int main() {
long long n,m;
cin>>n>>m;
vector<string> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

vector<string> ans=arr;
int dr[4]={-1,0,1,0};
int dc[4]={0,1,0,-1};
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        if(ans[i][j]=='.'){
            queue<pair<long long,long long>> q;
            q.push({i,j});
            ans[i][j]='B';
            while(!q.empty()){
                auto node=q.front();
                int row=node.first;
                int col=node.second;
              //  cout<<"row="<<row<<" "<<"col="<<col<<endl;
                q.pop();
                for (int i = 0; i < 4; i++)
                {
                    int newr=row+dr[i];
                    int newcol=col+dc[i];
                       //cout<<"newr="<<newr<<"newcol="<<newcol<<endl;
                    if(newr>=0 && newcol>=0 && newr<n && newcol<m && ans[newr][newcol]=='.'){
                         //cout<<"newr="<<newr<<"newcol="<<newcol<<endl;
                        if(ans[row][col]=='B'){
                            ans[newr][newcol]='W';
                        }
                        else{
                            ans[newr][newcol]='B';
                        }
                        //cout<<"hihi="<<ans[newr][newcol]<<endl;
                        q.push({newr,newcol});
                    }
                   
                }
                

            }
        }
    }
    
}
for (int i = 0; i < n; i++)
{
    cout<<ans[i]<<endl;
}



return 0;
}