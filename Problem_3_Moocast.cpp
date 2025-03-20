#include <bits/stdc++.h>
using namespace std;
long long dfs(int cow,vector<long long> &vis,vector<vector<long long>> &conn){

vis[cow]=1;

int ans=1;

for (int i = 0; i < conn.size(); i++)
{
    if(!vis[i] && conn[cow][i]){
        vis[i]=1;
        ans=ans+dfs(i,vis,conn);
    }
}

return ans;


}
int main() {
    freopen("moocast.in", "r", stdin);
long long n;
cin>>n;
vector<vector<long long>> conn(n,vector<long long> (n,0));

vector<int> x(n), y(n);
	vector<int> p(n);
	for (int c = 0; c < n; c++) { 
        cin >> x[c] >> y[c] >> p[c]; 
        }
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        long long dist=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
        if(dist<=p[i]*p[i]){
            conn[i][j]=1;
        }
        //cout<<conn[i][j]<<" ";
    }
    //cout<<endl;
    
}



vector<long long > vis(n,0);
long long maxi=0;
for (int i = 0; i < n; i++)
{
    vis.assign(n, 0);
    maxi=max(maxi,dfs(i,vis,conn));
}
freopen("moocast.out", "w", stdout);
cout<<maxi<<endl;

return 0;
}