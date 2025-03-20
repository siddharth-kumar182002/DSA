#include <bits/stdc++.h>
using namespace std;
int main() {
string s;
cin>>s;
long long n=s.size();
vector<long long> dp(n+1,0);
dp[0]=0;
for (int i = 1; i <=n; i++)
{
    dp[i]+=dp[i-1];
    if(s[i-1]=='0' || s[i-1]=='4' || s[i-1]=='8'){
        dp[i]+=1;
    }
    if(i>=2){
    long long a=(s[i-2]-'0')*10+(s[i-1]-'0');
    
    //cout<<a<<endl;
    if(a%4==0){
         dp[i]+=(i-1);
    }
    }
}

cout<<dp[n]<<endl;

return 0;
}