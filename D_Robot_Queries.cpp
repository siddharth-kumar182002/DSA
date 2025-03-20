#include <bits/stdc++.h>
 
using namespace std;
 
#define x first
#define y second
 
using pt = pair<int, int>;
bool check(pt p, int l, int r,map<pt, vector<int>> &mp) {
  	if (!mp.count(p)) return false;
  	auto it = lower_bound(mp[p].begin(), mp[p].end(), l);
  	return it != mp[p].end() && *it <= r;
  }
  
int main() {
  ios::sync_with_stdio(false); cin.tie(0);
  int n, q;
  cin >> n >> q;
  string s;
  cin >> s;
  vector<pt> pos(n + 1);
  for (int i = 0; i < n; ++i) {
    pos[i + 1].x = pos[i].x + (s[i] == 'R') - (s[i] == 'L');
    pos[i + 1].y = pos[i].y + (s[i] == 'U') - (s[i] == 'D');
  }
  map<pt, vector<int>> mp;
  for (int i = 0; i <= n; ++i) mp[pos[i]].push_back(i);
  while (q--) {
  	int x, y, l, r;
  	cin >> x >> y >> l >> r;
  	int nx = pos[r].x + pos[l - 1].x - x, ny = pos[r].y + pos[l - 1].y - y;
  	bool f = check({x, y}, 0, l - 1,mp)
  	       | check({nx, ny}, l, r - 1,mp)
  	       | check({x, y}, r, n,mp);
  	cout << (f ? "YES" : "NO") << '\n';
  }
}