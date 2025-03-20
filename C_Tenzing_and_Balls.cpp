#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long> arr(n);
vector<long long> lind(n+1,0);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    if(lind[arr[i]]==0){
    lind[arr[i]]=i+1;
    }

}

vector<long long> dp(n+1,0);
map<long long,long long> mp;
//dp[x-1]-x=mp
for (int i = 1; i <=n; i++)
{
    dp[i]=dp[i-1];
   // cout<<"inarr"<<arr[i-1]<<endl;
//cout<<"inmp="<<mp[arr[i-1]]<<endl;
//cout<<"i="<<i<<endl;
        
       if(mp.count(arr[i-1])){
         dp[i]=max(dp[i],mp[arr[i-1]]+(i+1));
       }
long long update=0;
if(i!=0){
    update+=dp[i-1];
}
update-=i;
if(mp.count(arr[i-1])){
    mp[arr[i-1]]=max(mp[arr[i-1]],update);
}
else{
    mp[arr[i-1]]=update;
}
    
    //cout<<"dp[i]="<<dp[i]<<endl;
}
cout<<dp[n]<<endl;

}
return 0;
}