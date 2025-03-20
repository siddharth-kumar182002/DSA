#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long> arr[n];
long long sum=0;
long long mini=1e11;
for (int i = 0; i < n; i++)
{
    long long m;
    cin>>m;
    for (int j = 0; j < m; j++)
    {
        long long a;
        cin>>a;
        arr[i].push_back(a);
        mini=min(mini,a);
    }
    sort(arr[i].begin(),arr[i].end());
    sum=sum+arr[i][1];
}


long long ans=-1;
for (int i = 0; i < n; i++)
{
    ans=max(ans,sum-arr[i][1]+mini);
    
}

cout<<ans<<endl;
}
return 0;
}