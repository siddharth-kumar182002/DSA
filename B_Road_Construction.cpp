#include <bits/stdc++.h>
using namespace std;
int main() {
long long n,m;
cin>>n>>m;
vector<long long> arr(n+1,0);
for (int i = 0; i < m; i++)
{
    long long a,b;
    cin>>a>>b;
    arr[a]=1;
    arr[b]=1;
}
long long node;
for (int i = 1; i <=n; i++)
{
    if(arr[i]==0){
        node=i;
        break;
    }
}
cout<<n-1<<endl;
for (int i = 1; i <=n; i++)
{
    if(i!=node){
        cout<<node<<" "<<i<<endl;
    }
}
cout<<endl;


return 0;
}