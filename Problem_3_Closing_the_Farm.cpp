#include <bits/stdc++.h>
using namespace std;

void dfs(long long barn,long long &count,vector<vector<long long>> &adjl, vector<long long> &vis,vector<long long > &brcl){
vis[barn]=1;
count++;
for(auto x:adjl[barn]){
    if(!vis[x] && !brcl[x]){
        dfs(x,count,adjl,vis,brcl);
    }
}
}
int main() {
    freopen("closing.in", "r", stdin);
	freopen("closing.out", "w", stdout);
long long n,m;
cin>>n>>m;

vector<vector<long long> > adjl(n+1);

for (int i = 0; i < m; i++)
{
     long long l1,l2;
     cin>>l1>>l2;
       adjl[l1].push_back(l2);
         adjl[l2].push_back(l1);
}
long long ch=n;
vector<long long > brcl(n+1);
for (int i = 0; i < n; i++)
{
    long long barn;
    cin>>barn;
    long long count=0;
    vector<long long> vis(n+1,0);
    dfs(barn,count,adjl,vis,brcl);
    brcl[barn]=1;;
    //cout<<count<<endl;
    if(count==ch){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    ch--;
}





return 0;
}