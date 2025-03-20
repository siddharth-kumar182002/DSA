#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long> arr(n);
long long ans=0;
map<long long,long long> mp;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    mp[arr[i]]=i;
}
for (int i = 0; i <n; i++)
{
   if((arr[i]+1<=n) && mp[arr[i]]>mp[arr[i]+1]){
    ans++;
   }
}
cout<<ans<<endl;

}
return 0;
}