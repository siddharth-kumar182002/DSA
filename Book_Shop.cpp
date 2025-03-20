#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> price(n), pages(n);
  for (int&v : price) cin >> v;
  for (int&v : pages) cin >> v;
  vector<vector<int>> dp(n,vector<int>(x+1,0));
  for (int i = price[0]; i <=x; i++)
  {
       dp[0][i]=pages[0];
  }
  
  for (int i = 1; i < n; i++) {
    for (int j = 0; j <= x; j++) {
      dp[i][j] = dp[i-1][j];
      int left = j-price[i];
      if (left >= 0) {
	dp[i][j] = max(dp[i][j], dp[i-1][left]+pages[i]);
      }
    }
  }
  cout << dp[n-1][x] << endl;
}