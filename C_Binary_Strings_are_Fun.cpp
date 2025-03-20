#include <bits/stdc++.h>
using namespace std;
long long mod=998244353;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
string s;
cin>>s;
long long ans=1;
vector<long long> dp(n);
dp[0]=1;
vector<long long> potwo(n+1,1);


for (int i =1; i <n; i++)
{
if(s[i]==s[i-1]){
    dp[i]=dp[i-1]+1;
}
else{
    dp[i]=1;
}
potwo[i]=(2)*(potwo[i-1])%mod;
ans=(ans+potwo[dp[i]-1])%mod;

}



cout<<ans<<endl;

}
return 0;
}