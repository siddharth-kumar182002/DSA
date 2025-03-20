#include <bits/stdc++.h>
using namespace std;
struct Edges{
    long long a,b,c;
};
void dijsktra(long long source,long long n,vector<vector<pair<long long,long long>>> &g ,vector<long long> &dist)
{
    

    priority_queue<pair<long, long>, vector<pair<long, long>>, greater<pair<long, long>>> pq;

    dist[source] = 0;

    pq.push(make_pair(0, source));

    while (!pq.empty())
    {
        long long distance = pq.top().first;
        long long prev = pq.top().second;
        pq.pop();
  if(distance!=dist[prev]){
    continue;
  }
        vector<pair<long long, long long>>::iterator it;

        for (it = g[prev].begin(); it != g[prev].end(); it++)
        {
            long long next = it->first;
            long long nextDist = it->second;

            if (dist[next] > dist[prev] + nextDist)
            {
                dist[next] = dist[prev] + nextDist;
                pq.push(make_pair(dist[next], next));
            }
        }
    }
 
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,m;
cin>>n>>m;
vector<Edges> edges;
vector<vector<pair<long long,long long>>> a(n+1);
vector<vector<pair<long long,long long>>> b(n+1);
for (int i = 0; i < m; i++)
{
    long long x,y,z;
    cin>>x>>y>>z;
    Edges e;
    e.a=x;
    e.b=y;
    e.c=z;
    a[x].push_back({y,z});
    b[y].push_back({x,z});
    edges.push_back(e);
}

vector<long long> dist(n+1,1e16);
vector<long long> dist1(n+1,1e16);
dijsktra(1,n,a,dist);
dijsktra(n,n,b,dist1);



// for(auto x:dist){
//     cout<<x<<" ";
// }
// cout<<endl;
// for(auto x:dist1){
//     cout<<x<<" ";
// }
// cout<<endl;
long long ans=1e16;

for (int i = 0; i < m; i++)
{
    long long x,y,z;
    x=edges[i].a;
    y=edges[i].b;
    z=edges[i].c;

if(dist[x]!=1e16 && dist1[y]!=1e16){
    ans=min(ans,(dist[x]+dist1[y]+z/2));
}


}
cout<<ans<<endl;



return 0;
}