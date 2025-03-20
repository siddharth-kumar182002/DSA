#include <bits/stdc++.h>
using namespace std;

bool f(long long n){
    string s=to_string(n);
    //cout<<s<<endl;
    for(int i=0;i<s.size();i++){
        if(s[i]!='0' && s[i]!='1'){
            return false;
        }
    }
    return true;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
vector<long long> nums;
for (int i = 1; i <=(1e5+1); i++)
{
    if(f(i)){
      nums.push_back(i);
    }
}
vector<long long> dp((1e5+1),0);
dp[1]=1;
for (int i = 2; i <=1e5; i++)
{
    for (int j = 0; j <nums.size(); j++)
    {
        if((i%nums[j]==0) && dp[i/nums[j]]){
            dp[i]=1;
        }
        if(dp[i]==1){
            break;
        }
    }
    
}

while(t--){
long long n;
cin>>n;
//cout<<"HI"<<endl;
if(dp[n]==1){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}




}
return 0;
}