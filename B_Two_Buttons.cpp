#include <bits/stdc++.h>
using namespace std;

vector<bool>visited;


int BFS(int n, int m)
{
  queue<pair<int,int>>q;
  q.push({n,0});
  visited[n]=true;
  while(!q.empty())
  {
    int v = q.front().first;
    int d=q.front().second;
    q.pop();
    if(v==m)
    {
      return d;
    }
    if(v*2<1e5 and !visited[v*2])
    {
      q.push({v*2,d+1});
      visited[v*2]=true;
  
    }
    if(v-1>=0 and !visited[v-1])
    {
      q.push({v-1,d+1});
      visited[v-1]=true;
    }
  }

}

int main()
{
 int n, m; cin>>n>>m; 
 visited.resize(1e5, false);

 cout<<BFS(n, m)<<"\n";
}

