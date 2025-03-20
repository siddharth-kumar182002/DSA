#include <bits/stdc++.h>
#define ll long long
#define int long long
#define all(v) ((v).begin()), ((v).end())
using namespace std;
const int N = (int)1e5 + 5;
int n, m, ans;
bool vis[N];
vector<int> v,val,indx;
vector<int> adj[N];

void dfs(int node) {
    vis[node]=1;
    val.push_back(v[node]);
    indx.push_back(node);
    for(auto it:adj[node]){
        if(!vis[it]){
            dfs(it);
        }
    }
}
void doWork() {
    cin >> n ;
    v.resize(n);

    for (auto &it : v) cin >> it;

    for (int i = 0; i < n; ++i) {
        string s;cin>>s;
        for (int j = 0; j <s.size() ; ++j) {
            if(s[j]=='1'){
               adj[i].push_back(j);
            }
        }
    }
    for (int i = 1; i <=n ; ++i) {
        if(!vis[i]){
            indx.clear();val.clear();
            dfs(i);
            sort(all(val));
            sort(all(indx));
            for (int j = 0; j < indx.size(); ++j) {
                v[indx[j]]=val[j];
            }
        }
    }
    for(auto it:v)cout<<it<<" ";
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    while (t--) {
        doWork();
    }
}
