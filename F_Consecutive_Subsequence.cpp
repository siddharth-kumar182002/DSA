#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n;
cin>>n;
vector<long long> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

map<long long,long long> dp;
long long len=0; 
long long end;
for (int i = 0; i <n; i++)
{
    dp[arr[i]]=max(dp[arr[i]],1LL);
    dp[arr[i]]=max(dp[arr[i]],dp[arr[i]-1]+1);

if(dp[arr[i]]>len){
    len=dp[arr[i]];
    end=arr[i];
}
}


vector<long long > ans;
for (int i = n-1; i >=0 ; i--)
{
    if(arr[i]==end){
        ans.push_back(i+1);
        end--;
    }
}
reverse(ans.begin(),ans.end());
cout<<len<<endl;
for(auto x:ans){
    cout<<x<<" ";
}
cout<<endl;
return 0;
}