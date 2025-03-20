#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
string s;
cin>>s; 
vector<long long> arr1(26,0);
vector<vector<long long>> dp(26,vector<long long > (26,0));
long long count=0;
arr1[s[0]-'a']++;
count++;
for (int i = 1; i < s.size(); i++)
{
    
    for (int x = 0; x < 26; x++)
    {
            dp[x][s[i]-'a']+=arr1[x];
        count=max(count,dp[x][s[i]-'a']);
        
    }
    arr1[s[i]-'a']++;
    count=max(count,arr1[s[i]-'a']);
    
}
cout<<count<<endl;


return 0;
}