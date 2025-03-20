#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,m;
cin>>n>>m; 
vector<long long> arr[n+1];
for (int i = 0; i < m; i++)
{
    long long a,b;
    cin>>a>>b;
    arr[a].push_back(b);
    arr[b].push_back(a);
}
for (int i = 1; i <=n; i++)
{
    cout<<arr[i].size()<<endl;
}


return 0;
}