#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long > arr(n+1);
for (int i = 1; i <=n; i++)
{
        cin>>arr[i];
}
vector<long long> d(n+1,1);

for (int i = 1; i <=n; i++)
{
    for (int j = 2*i; j <=n; j=j+i)
    {
        if(arr[i]<arr[j]){
            d[j]=max(d[j],d[i]+1);
        }
    }
    
}
long long ans=0;
for (int i = 1; i <=n; i++)
{
    ans=max(ans,d[i]);
}

cout<<ans<<endl;

}
return 0;
}