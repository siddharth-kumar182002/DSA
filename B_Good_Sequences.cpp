#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N=1e5+10;
vector<int> a(N);
int dp[N]={0},d[N]={0};



int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int n;
    cin>>n;
    int ans=0;
    
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        dp[x]=1;
        d[x]=1;
        for(int j=2;j*j<=x;j++){
            if(x%j==0){
                dp[x]=max(dp[x],d[j]+1);
                dp[x]=max(dp[x],d[x/j]+1);
            }
        }
        for(int j=2;j*j<=x;j++){
            if(x%j==0){
                d[j]=dp[x];
                d[x/j]=dp[x];
            }
        }
        ans=max(ans,dp[x]);
    }
    cout<<ans<<endl;

    
    return 0;
}