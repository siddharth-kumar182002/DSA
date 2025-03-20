#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n,m;
    cin>>n>>m;

vector<long long> arr(n+1);
vector<long long> g[n+1];
for (int i = 0; i < m; i++)
{
    long long a,b;
    cin>>a>>b;
    g[a].push_back(b);
    g[b].push_back(a);

    arr[a]++;
    arr[b]++;
}
int ans=0;
for (int i = 1; i <=n*(n-1)/2; i++)
{
    vector<long long> out;
    for (int j = 1;j <=n; j++)
    {
        if(arr[j]==1){
            arr[j]--;
            out.push_back(j);
        }
    }

    for(auto x:out){
          for(auto y:g[x]){
                  arr[y]--;
          }
    }
    if(out.size()>0){
        ans++;
        out.clear();
    }
    else{
        break;
    }
    
}
cout<<ans<<endl;


return 0;
}