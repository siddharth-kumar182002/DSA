#include <bits/stdc++.h>
using namespace std;
int f(string &s,string &t,int i, int j,vector<vector<int>> &dp){
    if(j<0){
        return 1;
    }
    if(i<0){
        return 0;
    }
if(dp[i][j]!=-1){
    return dp[i][j];
}
    if(s[i]==t[j]){
         return dp[i][j]= f(s,t,i-1,j-1,dp)+f(s,t,i-1,j,dp);
    }
    else{
        return dp[i][j]=f(s,t,i-1,j,dp);
    }
}
int main() {
string s;
cin>>s;
string t="QAQ";
int n=s.size();
int m=3;
vector<vector<int>> dp(n,vector<int>(m,-1)); 
cout<<f(s,t,n-1,m-1,dp)<<endl;
return 0;
}