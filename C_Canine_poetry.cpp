#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
string s;
cin>>s;
long long n=s.size();
vector<long long> dp(n,0);

for (int i = 1; i < n; i++)
{
    dp[i]=dp[i-1];
    if(s[i]==s[i-1] && s[i]!='0'){
        s[i]='0';
        dp[i]+=1;
    }
    if(i-2>=0 && s[i]==s[i-2] && s[i]!='0'){
        s[i]='0';
            dp[i]+=1;
    }
    //cout<<"i="<<i<<" "<<"dp="<<dp[i]<<endl;

}

cout<<dp[n-1]<<endl;

}
return 0;
}