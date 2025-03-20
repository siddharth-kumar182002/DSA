#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
int x;
	cin >> x;
 
	if (x > 1099) {
		cout << "YES" << endl;
		continue;
	}
 
	// for (int a = 0 ; a <= x / 11 ; a++) {
	// 	for (int b = 0 ; b <= x / 111 ; b++) {
	// 		if (11 * a + 111 * b == x) {
	// 			cout << "YES" << endl;
	// 			return;
	// 		}
	// 	}
	// }
	// cout << "NO" << endl;
 
	vector<int>dp(1100);
	dp[0] = 1;
	for (int i = 1 ; i <= 1099 ; i++) {
		dp[i] = (i >= 11 ? dp[i - 11] : 0) || (i >= 111 ? dp[i - 111] : 0);
	}
 
	cout << (dp[x] ? "YES" : "NO") << endl;
}
return 0;
}