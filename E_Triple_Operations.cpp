#include <bits/stdc++.h>
using namespace std;
const long long maxi=200001;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int dp[maxi];
 dp[0]=0;
for(int i = 1;i <maxi;i++){
dp[i]=dp[i/3]+1;
} 
int ans[maxi];
ans[0]=0;
for (int i = 1; i <maxi; i++)
{
    ans[i]=ans[i-1]+dp[i];
    
}

int t;
cin>>t;
while(t--){
long long l,r;
cin>>l>>r;
 //cout<<ans[r]<<" "<<ans[l]<<endl;

 long long sum=2*dp[l];
sum=sum+(ans[r]-ans[l]);

cout<<(sum)<<endl;



}
return 0;
}