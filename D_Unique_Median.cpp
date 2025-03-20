#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,m;
cin>>n>>m;
vector<vector<pair<long long,long long>>> tree(n+1);
for(int i=0;i<m;i++){
    long long a,b,c;
    cin>>a>>b>>c;
    tree[a].push_back({c,b});
    tree[b].push_back({c,a});
}
return 0;
}