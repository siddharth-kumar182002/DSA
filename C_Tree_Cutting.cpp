#include <bits/stdc++.h>
using namespace std;
int dfs(int curr, vector<vector<int>>& adj, int size, int k, int parent, int &cuts) {
    int curr_size = 0;
    for (auto child : adj[curr]) {
        if (child != parent) {
            curr_size += dfs(child, adj, size, k, curr, cuts);
        }
    }
    curr_size++;
    if (curr_size >=size) {
        curr_size=0;
        cuts++;
        // return 0;
    }
    return curr_size;
}
 bool ok(int size, vector<vector<int>>& adj, int k) {
    int cuts = 0;
    dfs(0, adj, size, k, -1, cuts);
  
    return (cuts > k);
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
  int n;cin>>n;int k;cin>>k;
    vector<vector<int>>adj(n);
    for(int i=0;i<n-1;i++){
      int u,v;cin>>u>>v; 
      u--,v--;
      adj[u].push_back(v);
      adj[v].push_back(u);
 
    }
  
    int l=1,r=n+1;
    int ans=0;
    while(l+1<r){
      int mid=(l+r)/2;
      if(ok(mid,adj,k)){
      
        l=mid;
      }
      else{
        r=mid;
      }
    }
 
    cout<<l<<endl;
}
return 0;
}