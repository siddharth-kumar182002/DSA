#include <bits/stdc++.h>
using namespace std;
void dfs(long long node,vector<long long > &vis,vector<long long> graph[] ){
    vis[node]=1;
   // cout<<node<<endl;
    for(auto x: graph[node]){
       //  cout<<node<<endl;
           if(!vis[x]){
             //cout<<node<<endl;
            dfs(x,vis,graph);
           }
    }
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n;
cin>>n;
vector<long long> arr[26];
for (int i = 0; i < n; i++)
{
    string s;
    cin>>s;
    for(auto x:s){
        arr[(x-'a')].push_back(i);
    }
}
vector<long long> graph[n];
for (int i = 0; i < 26; i++)
{
  //  cout<<arr[i][0]<<endl;
    for (int j = 1; j < arr[i].size(); j++)
    {
        graph[arr[i][0]].push_back(arr[i][j]);
       // cout<<arr[i][0]<<endl;
         graph[arr[i][j]].push_back(arr[i][0]);
    }
    
}
vector<long long > vis(n,0);
long long count=0;
for (int i = 0; i < n; i++)
{
   // cout<<"i="<<i<<endl;
  //  cout<<count<<endl;
    if(!vis[i]){
        count++;
        dfs(i,vis,graph);
    }
}

cout<<count<<endl;




return 0;
}