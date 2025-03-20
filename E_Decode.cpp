#include <bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
string s;
cin>>s;
long long n=s.size();
vector<long long> arr(n+1);
arr[0]=0;
for (int i = 1; i <=n; i++)
{
    if(s[i-1]=='0'){
       arr[i]=-1;
    }else{
        arr[i]=1;
    }
    arr[i]=arr[i]+arr[i-1];
}
// for(auto x:arr){
//     cout<<x<<" ";
// }
// cout<<endl;

vector<long long > ans(n+1);
ans[0]=1;

map<long long,long long> mp;
mp[arr[0]]=ans[0];
for (int i = 1; i <=n; i++)
{
    ans[i]=i+1+mp[arr[i]];
    mp[arr[i]]=ans[i];
}
long long temp=0;
// for(auto x:ans){
//     cout<<x<<" ";
// }
// cout<<endl;
for (int i = 1; i <=n; i++)
{
    temp=(temp%mod+(((ans[i]-i-1)%mod)*((n-i+1)%mod))%mod)%mod;
   // cout<<((ans[i]-i-1)*(n-i+1))<<endl;
}

cout<<temp<<endl;
}
return 0;
}