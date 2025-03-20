#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);

int n;
set<int> s;
int a[200000], ans;
	int r = -1;
	cin >> n;
	for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
	for(int i=0;i<n;i++){
		while (r < n - 1 && !s.count(a[r + 1])){
             s.insert(a[++r]);
        }
		ans = max(ans, r - i + 1);
		s.erase(a[i]);
	}
	cout << ans;

return 0;
}