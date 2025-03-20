#include <bits/stdc++.h>
using namespace std;
int main() {
 string s;
 cin>>s;
 vector<int> dp(s.size());
 if(s[0]==s[1]){
    dp[0]=1;
 }
 else{
    dp[0]=0;
 }
for (int i = 1; i < s.size(); i++)
{
    if(s[i]==s[i+1]){
        dp[i]=dp[i-1]+1;
    }
    else{
        dp[i]=dp[i-1];
    }
}

int t;
cin>>t;
while(t--){

int l,r;
cin>>l>>r;

if(l-2<0){
cout<<(dp[r-2])<<endl;
}
else{
   cout<<(dp[r-2])-(dp[l-2])<<endl; 
}
}
return 0;
}