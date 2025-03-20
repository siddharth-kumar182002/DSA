#include <bits/stdc++.h>
using namespace std;

struct Edge {
    long long a, b, cost;
};

long long n, m;
vector<Edge> edges;
const long long INF = 1e16;

void solve()
{
 
    vector<long long> d(n+1);
    vector<long long> p(n+1, -1);
    long long x;
    for (int i = 0; i < n; ++i) {
        x = -1;
        for (Edge e : edges) {
            if (d[e.a] + e.cost < d[e.b]) {
                d[e.b] = max(-INF, d[e.a] + e.cost);
                p[e.b] = e.a;
                x = e.b;
            }
        }
    }

    if (x == -1) {
        cout << "NO"<<endl;
    } else {
   // cout<<"X="<<x<<endl;
        for (int i = 0; i < n; ++i){
            //cout<<"X="<<x<<" ";
            x = p[x];
        }
        //cout<<endl;

        vector<long long> cycle;
        for (int v = x;; v = p[v]) {
            cycle.push_back(v);
           // cout<<"v="<<v<<" ";
            if (v == x && cycle.size() > 1)
                break;
        }
       // cout<<endl;
        reverse(cycle.begin(), cycle.end());

        cout << "YES"<<endl;
        for (int v : cycle){
            cout << v << ' ';
        }
        cout << endl;
    }
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
cin>>n>>m;

for(int i=0;i<m;i++){
    long long x,y,z;
    cin>>x>>y>>z;
    Edge e;
    e.a=x;
    e.b=y;
    e.cost=z;
    edges.push_back(e);
}
solve();

return 0;
}