#include <bits/stdc++.h>
using namespace std;
int main() {
string a,b;
cin>>a>>b;
vector<vector<long long>> dp(a.size()+1,vector<long long> (b.size()+1,1e9));
if(a[0]==b[0]){
    dp[0][0]=0;
}
else{
dp[0][0]=1;
}
//cout<<dp[0][0]<<" ";
for (int i = 0; i <=a.size(); i++)
{
    for (int j = 0; j <=b.size(); j++)
    {
        if(i==0 && j==0){
            continue;
        }
        long long insert=1e6;
        if(i-1>=0){
            insert=dp[i-1][j]+1;
        }
        long long remove=1e6;
        if(j-1>=0){
            remove=dp[i][j-1]+1;
        }
        long long replace=1e6;
        if((i-1>=0) && (j-1>=0)){
            replace=dp[i-1][j-1];
                if(a[i]!=b[j]) {
                    replace=dp[i-1][j-1]+1;
                }
        }

           dp[i][j]=min(replace,min(insert,remove));
          // cout<<"i="<<i<<" j="<<j<<"replace="<<replace<<endl;
          // cout<<dp[i][j]<<" ";
    }
  //  cout<<endl;
    
}
//cout<<dp[1][0]<<endl;
cout<<dp[a.size()-1][b.size()-1]<<endl;
return 0;
}