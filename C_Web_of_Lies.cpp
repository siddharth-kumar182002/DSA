#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int n,m;
    cin>>n>>m;
    vector<set<int>> adj(n + 1);
    while (m--){
        int u,v;
        cin>>u>>v;
        adj[u].insert(v),adj[v].insert(u);
    }
    int ans = 0;
    vector<bool> is(n,false);
    
    for (int i = 1;i<=n;i++)
        if (adj[i].lower_bound(i) == adj[i].end()){
            ans++;
            is[i] = 1;
        }
    
    int q;
    cin>>q;

    while (q--){
        int type,u,v;
        cin>>type;
        if (type == 3){
            cout<<ans<<endl;
        }
        else{
            cin>>u>>v;

            if (is[u]){
                ans--;
            }
            if (is[v]){
                ans--;
            }
            
            if (type == 1){
                adj[u].insert(v);
                adj[v].insert(u);
            }
            
            else{
                adj[u].erase(v);
                adj[v].erase(u);
            }
            
            if (adj[u].lower_bound(u) != adj[u].end()){
                is[u] = 0;
            }
            else{
                is[u] = 1;
            }

            if (adj[v].lower_bound(v) != adj[v].end()){
                is[v] = 0;
            }
            else {
                is[v] = 1;
            }

            if (is[u]){
                ans++;
            }
            if (is[v]){
                ans++;
            }
        }
    }
return 0;
}