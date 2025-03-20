#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long ll;
typedef vector<long long> vll;
typedef pair<long long, long long> pll;
typedef vector<pair<long long, long long>> vpll;
typedef vector<pair<int,int>> vpii;
typedef vector<int> vii;
const ll INF = 1e18;
const int INFI = 1e9;
const ll PRIME1 = 1000000007;
const int PRIME2 = 998244353;
#define pb push_back
#define pob pop_back
#define f first
#define sec second
#define fix(f,n) std::fixed<<std::setprecision(n)<<f
#define all(x) x.begin(), x.end()
vector<vll> adj; //adjacent nodes of each node
//adjacent nodes of each node with weight of edge
vector<bool> visited; //visited nodes check
 

 
void dijkstra(ll s,vll& d,vll& p,ll n,vector<vector<pair<long long,long long>>> &adjw) {
    // Dijkstra: shortest distance from source
    
   
    d[s] = 0;
    set<pll> q;
    q.insert({0, s});
    while (!q.empty()) {
        
        ll v = q.begin()->sec;
        //cout<<v<<endl;
        q.erase(q.begin());
        for (auto edge : adjw[v]) {
            ll to = edge.first;
            ll len = edge.second;
            if (d[v] + len < d[to]) {
                q.erase({d[to],to});
                d[to] = d[v] + len;
                p[to] = v;
                q.insert({d[to], to});
            }
        }
    }
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
    
long long n,m,h;
cin>>n>>m>>h;
vector<vector<pair<long long,long long>>> adjw(n+1);
 vector<vector<pair<long long,long long>>> adjw1(n+1);
 vector<vector<pair<long long,long long>>> adjw2(n+1);
vector<long long> horses(h);
map<long long,long long> mp;
for (int i = 0; i < h; i++)
{
    cin>>horses[i];
    mp[horses[i]]=1;
}

for (int i = 0; i < m; i++)
{
    long long a,b,w;
    cin>>a>>b>>w;
    adjw[a].push_back({b,w});
    adjw[b].push_back({a,w});
     adjw1[a].push_back({b,w/2});
    adjw1[b].push_back({a,w/2});
     adjw2[a].push_back({b,w/2});
    adjw2[b].push_back({a,w/2});
}

vector<long long> d1(n+1,INF);
vector<long long> p1(n+1,-1);
dijkstra(1,d1,p1,n,adjw);
for(int i=1;i<=n;i++){
    
    if(mp[i]==1){
        adjw1[0].push_back({i,d1[i]});
    adjw1[i].push_back({0,d1[i]});
    }
}

vector<long long> d2(n+1,INF);
vector<long long> p2(n+1,-1);
dijkstra(0,d2,p2,n,adjw1);
for(int i=1;i<=n;i++){
    d1[i]=min(d1[i],d2[i]);
    
}



vector<long long> d3(n+1,INF);
vector<long long> p3(n+1,-1);
dijkstra(n,d3,p3,n,adjw);
for(int i=1;i<=n;i++){
 
    if(mp[i]==1){
        adjw2[0].push_back({i,d3[i]});
    adjw2[i].push_back({0,d3[i]});
    }
}

vector<long long> d4(n+1,INF);
vector<long long> p4(n+1,-1);
dijkstra(0,d4,p4,n,adjw2);
for(int i=1;i<=n;i++){
    d3[i]=min(d3[i],d4[i]);
    
}

long long ans=INF;
for (int i = 1; i <=n; i++)
{
    ans=min(ans,max(d1[i],d3[i]));
}


if(ans==INF){
    cout<<-1<<endl;
}
else{
cout<<ans<<endl;
}


}
return 0;
}