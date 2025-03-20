#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
string s;
cin>>s;
long long n=s.size();
vector<long long> dp(n+1,0);
vector<long long> posn(27,0);

s='@'+s;

for (int i = 1; i <=n; i++)
{
    dp[i]=dp[i-1]+1;
    if(posn[s[i]-'a'+1]!=0){
       dp[i]=min(dp[i],dp[posn[s[i]-'a'+1]-1]+i-posn[s[i]-'a'+1]-1);
    }
    
    posn[s[i]-'a'+1]=i;
    //cout<<"s="<<posn[s[i]-'a'+1]<<endl;
}

cout<<dp[n]<<endl;




}
return 0;
}