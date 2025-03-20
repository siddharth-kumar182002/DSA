#include <bits/stdc++.h>
using namespace std;
long long MOD=1e9+7;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);


string s;
cin>>s;
long long n=s.size();

if(count(s.begin(),s.end(),'w')>0 || count(s.begin(),s.end(),'m')>0){
    cout<<0<<endl;
    return 0;
}
vector<long long> dp(n+1);
dp[0]=1;
dp[1]=1;

for (int i = 2; i <=n; i++)
{
    if((s[i-1]=='u' && s[i-2]=='u') || (s[i-1]=='n' && s[i-2]=='n')){
         dp[i]=(dp[i-1]+dp[i-2])%MOD;
    }
    else{
        dp[i]=dp[i-1];
    }
}
cout<<dp[n]<<endl;
return 0;
}