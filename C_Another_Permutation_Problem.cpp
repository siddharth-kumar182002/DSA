#include <iostream>
#include <algorithm>
#include <set>
#include <stack>
#include <vector>
using namespace std;
void solve() {
	int N = 0; cin >> N;
	int ans = 0;
	vector<int> pr;
	pr.assign(N * N, -1);
	for (int i = 1; i <= N; ++i) {
		for (int j = 1; j <= N; ++j) {
			pr[i * j - 1] = 1;
		}
	}
	for (int mx = N * N; mx >= 1; --mx) {
		if (pr[mx - 1] == -1) continue;
        if(mx==15){
		vector<vector<int>> a;
		int curans = -mx;
		bool br = false;
		a.assign(N, vector<int>());
		for (int j = N; j >= 1; --j) {
			int num = min(mx / j, N);
			if (num < 1) {
				br = true;
				break;
			}
			a[num - 1].push_back(j);
		}
        for (int i = 0; i < a.size(); i++)
        {
            cout<<"i="<<i+1<<endl;
            for (int j = 0; j < a[i].size(); j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }

        
		if (br) break;
		stack<int> s;
		for (int i = 0; i < N; ++i) {
			s.push(i + 1);
            cout<<"s.top="<<s.top()<<endl;
			bool brk = false;
			for (auto x : a[i]) {
				if (s.empty()) {
					brk = true; break;
				}
				curans += s.top() * x;
                cout<<"curans="<<curans<<endl;
				s.pop();
			}
			if (brk) break;
		}
       
       //cout<<ans<<endl;
		ans = max(ans, curans);
         cout<<ans<<endl;
        }
	}
	cout << ans << "\n";
}
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t = 0; cin >> t;
	while (t--) solve();
	return 0;
}