#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n,m;
cin>>n>>m;
vector<long long > degree(n+1,0);
vector<long long> graph[n+1];
vector<long long> unhappy(n+1,0);
for (int i = 1; i <=n; i++)
{
    long long x;
    cin>>x;
    unhappy[i]=x;
}

for (int i = 0; i < m; i++)
{
    long long a,b;
    cin>>a>>b;
    graph[a].push_back(b);
    graph[b].push_back(a);
    degree[a]++;
    degree[b]++;
}

long long ans=INT_MAX;
if(m%2==0){
    ans=0;
}
for (int i = 1; i <=n; i++)
{
    if(degree[i]%2==1){
        ans=min(ans,unhappy[i]);
    }
    else{
        for(auto x:graph[i]){
            if(degree[x]%2==0){
                ans=min(ans,unhappy[x]+unhappy[i]);
            }
        }
    }
}
cout<<ans<<endl;





}
return 0;
}