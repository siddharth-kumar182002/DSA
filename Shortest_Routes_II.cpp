#include <bits/stdc++.h>
using namespace std;
struct Edge{
    long long a,b,c;
};

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,m,q;
cin>>n>>m>>q;
vector<vector<long long>> dist(n+1,vector<long long> (n+1,1e16));
vector<Edge> edges;
while(m--){
    long long x,y,z;
    cin>>x>>y>>z;
    dist[x][y]=min(dist[x][y],z);
     dist[y][x]=min(dist[y][x],z);
    Edge e,f;
    e.a=x;
    e.b=y;
    e.c=z;
    f.a=y;
    f.b=x;
    f.c=z;
    edges.push_back(e);
     edges.push_back(f);
}
// for(auto x:edges){
//     cout<<x.a<<endl;
// }
for (int i = 1; i <=n; i++)
{
    dist[i][i]=0;
}
// for (int i = 1; i <=n ; i++)
// {
//     for (int j = 1; j <=n; j++)
//     {
//         cout<<dist[i][j]<<" ";
//     }
//     cout<<endl;
    
// }
// cout<<endl;

for (int k = 1; k <=n; k++)
{
    for (int i = 1; i <=n; i++)
    {
        for (int j =1; j <=n; j++)
        {
            dist[i][j]=min(dist[i][j],(dist[i][k]+dist[k][j]));
        }
        
    }
    
}

while(q--){
    long long x,y;
    cin>>x>>y;
    if(dist[x][y]!=1e16){
        cout<<dist[x][y]<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}

return 0;
}