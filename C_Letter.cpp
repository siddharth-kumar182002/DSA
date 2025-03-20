#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
string s;
cin>>s;
long long n=s.size();
vector<long long> small(n,0);
vector<long long> dp(n,0);
if('a'<=s[0] && s[0]<='z'){
    small[0]++;
}

for (int i = 1; i < n; i++)
{
    small[i]=small[i-1];
    if('a'<=s[i] && s[i]<='z'){
          small[i]++;
    }
}
/*
for(auto x:small){
    cout<<x<<" ";
}
cout<<endl;*/
dp[0]=0;
//cout<<dp[0]<<endl;
for (int i = 1; i < n; i++)
{
    if('a'<=s[i] && s[i]<='z'){
           dp[i]=min(dp[i-1],small[i]+1);
      }
      else{
          dp[i]=min(dp[i-1]+1,small[i]);
      }
    //  cout<<dp[i]<<endl;
}
cout<<dp[n-1]<<endl;




return 0;
}