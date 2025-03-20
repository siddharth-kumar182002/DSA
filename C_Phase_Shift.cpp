#include <bits/stdc++.h>
 
using namespace std;


 	pair<int,int> get_path_end(int c,vector<int> &edge) {
		int len = 0;
		int cur = c;
		while (edge[cur] != -1)
			len++, cur = edge[cur];
		return make_pair(cur, len);
    }
int main() {
	// viv = true;
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cout << fixed << setprecision(20);
	int t; 
	cin >> t;
	while (t--){
        	int n;
	string s;
	cin >> n;
	cin >> s;
 
	vector<int> edge(26, -1);
	vector<int> redge(26, -1);
	vector<int> vec;
	for (auto c : s){
		vec.push_back(c - 'a');
    }
	for (int i = 0; i < n; i++) {
		if (edge[vec[i]] == -1) {
			for (int c = 0; c < 26; c++){
				if (redge[c] == -1) {
                    int clast,len;
					pair<int, int> p = get_path_end(c,edge);
                    clast=p.first;
                    len=p.second;
                   // cout<<clast<<" "<<len<<endl;
					if (clast != vec[i] || len == 25) {
						edge[vec[i]] = c;
						redge[c] = vec[i];
						break;
					}
				}
            }
		}
		vec[i] = edge[vec[i]];
	}
    
 
	for (int i = 0; i < n; i++)
		s[i] = vec[i] + 'a';
 
	cout << s << '\n';
    }
	
}