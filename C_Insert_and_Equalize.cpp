#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long> arr(n);
map<long long,long long> mp;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    mp[arr[i]]=1;
}
if(n==1){
    cout<<1<<endl;
    continue;
}
sort(arr.begin(),arr.end());


vector<long long> num;
for (int i = 0; i < n-1; i++)
{
    num.push_back(arr[n-1]-arr[i]);
}
long long x=0;
for (int i = 0; i < num.size(); i++)
{
    x=__gcd(x,num[i]);
}


long long y=arr[n-1]-x;
while(mp[y]==1){
y=y-x;
}
num.push_back((arr[n-1]-y));
long long ans=0;
for (int i = 0; i < num.size(); i++)
{
    ans=ans+(num[i]/x);
}
cout<<ans<<endl;


}
return 0;
}