#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,m;
cin>>n>>m;
vector<long long> arr(n+1);
vector<long long> brr(n+1);
for (int i = 1; i <=n; i++)
{
    cin>>arr[i];
}

for (int i = 1; i <=n; i++)
{
    cin>>brr[i];
}

long long ans=0;
for (int i = n; i >m; i--)
{
    ans=ans+min(arr[i],brr[i]);
}
long long mini=1e12;
long long sum=0;
for (int i = m; i >=1; i--)
{
       mini=min(mini,sum+arr[i]);
       sum=sum+brr[i];
}
ans=ans+mini;

cout<<ans<<endl;



}
return 0;
}