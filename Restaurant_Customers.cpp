#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin >> n;
	vector<pair<long long, long long>> times;
	for (int i = 0; i < n; i++) {
		long long start, end;
		cin >> start >> end;
		times.push_back({start, 1});
		times.push_back({end, -1});
	}

	sort(times.begin(), times.end());

	long long curr_ppl = 0;
	long long max_ppl = 0;
	for (auto &t : times) {
		curr_ppl += t.second;
		max_ppl = max(max_ppl, curr_ppl);
	}

	cout << max_ppl << endl;
}