#include <bits/stdc++.h>
using namespace std;

int main() {

  long long t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    string s;
    cin>>s;
    vector<vector<long long>> dp(n,vector<long long> (n,0));
    for(int i=n-1;i>=0;i--){
        for(int j=i;j<n;j++){
            if(i==j){
                dp[i][j]=1;
            }
            else if((j-i)==1){
                 if(s[i]==s[j]){
                    dp[i][j]=1;
                 }
            }
            else{
                if(s[i]==s[j] && dp[i+1][j-1]){
                    dp[i][j]=1;
                }
            }
        }
    }
    long long maxi=-1;
    pair<long long,long long> pt;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j <n; j++)
        {
            if(dp[i][j]==1){
                if((j-i+1)>maxi){
                    maxi=j-i+1;
                    pt={i,j};
                }
                else if((j-i+1)==maxi){
                    //maxi=j-i+1;
                    if(s[pt.first]>=s[i]){
                    pt={i,j};
                    }
                }
            }
        }
        
    }

    for (int i = pt.first; i <=pt.second; i++)
    {
        cout<<s[i];
    }
    cout<<endl;
    






  }
  

  return 0;

}