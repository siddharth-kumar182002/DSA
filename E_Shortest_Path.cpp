#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,m,k;
cin>>n>>m>>k;
vector<long long> graph[n+1];
for (int i = 0; i < m; i++)
{
    long long a,b;
    cin>>a>>b;
    graph[a].push_back(b);
    graph[b].push_back(a);

}



return 0;
}