#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long > arr(n);
long long odd=0;
long long even=0;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    if(abs(arr[i])%2!=0){
        odd++;
    }
    else{
        even++;
    }
}
bool dp[101][101][2];

    dp[0][0][0] = true, dp[0][0][1] = false;
    dp[0][1][0] = true, dp[0][1][1] = false;
    dp[1][0][0] = false, dp[1][0][1] = true;
    dp[1][1][0] = true, dp[1][1][1] = true;
    dp[0][2][0] = true, dp[0][2][1] = false;
    dp[2][0][0] = false, dp[2][0][1] = true;
    dp[1][2][0] = false, dp[1][2][1] = true;
    dp[2][1][0] = false, dp[2][1][1] = true;
    dp[2][2][0] = false, dp[2][2][1] = true;   



    for (int i = 0; i <=100; i++)
    {
        for (int j = 0; j <=100; j++)
        {
            if(i<=2 && j<=2){
                continue;
            }
            for (int k = 0; k <=1; k++)
            {
                 bool x=i>0;
                 bool y=j>0;

                 if(i>=2 && !dp[i-2][j][1-k]){
                    x=false;
                 }
                 if(i>=1 && j>=1 && !dp[i-1][j-1][1-k]){
                    x=false;
                 }
                 if(j>=2 && !dp[i][j-2][k]){
                    y=false;
                 }
                 if(i>=1 && j>=1 && !dp[i-1][j-1][k]){
                    y=false;
                 }

                 dp[i][j][k]=x||y;
            }
        }   
    }
    cout<<(dp[odd][even][0] ? "Alice" : "Bob" )<<endl;

}
return 0;
}