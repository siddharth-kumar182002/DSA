#include <bits/stdc++.h>
using namespace std;

int main() {
long long n;
cin>>n;
vector<long long > dp(n+1,1e7);
dp[0]=0;
vector<long long > digits;
for (int i = 1; i <=n; i++)
{
    digits.clear();
    long long k=i; 
    while(k!=0){
        digits.push_back(k%10);
        k=k/10;
    }
    for (int j = 0; j < digits.size(); j++)
    {
       dp[i]=min(dp[i],dp[i-digits[j]]+1);
    }
    
}

cout<<dp[n]<<endl;
return 0; 
}