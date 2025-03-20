#include <bits/stdc++.h>
using namespace std;
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

vector<int> parent, setSz;


int find(int x)
{
	if (parent[x] == x)
		return x;
	return parent[x] = find(parent[x]);
}

int setunion(int a, int b)
{
	a = find(a);
	b = find(b);
	if (a == b)
		return setSz[a];
	if (setSz[a] < setSz[b])
		swap(a, b);
	parent[b] = a;
	setSz[a] += setSz[b];
	return setSz[a];
}

#define lint long long int


int main() {


	int t;
	cin >> t;
	for (int a0 = 0; a0 < t; a0++) {
		int n;
		int m;
		cin >> n >> m;

		parent.clear();
		parent.resize(n + 1);
		for (int i = 1; i <= n; i++)
			parent[i] = i;
		setSz.clear();
		setSz.resize(n + 1, 1);

		lint curFr = 0;
		lint res = 0;

		int same = 0;
	
		for (int a1 = 0; a1 < m; a1++) {
			int x;
			int y;
			cin >> x >> y;
			if (find(x) == find(y))
				same++;
			setunion(x, y);
			//lint oldSz1 = setSz[find(x)];
			//lint oldSz2 = setSz[find(y)];
			//lint newSz = setunion(x, y);
			//curFr += (newSz * (newSz - 1LL)) - (oldSz1 * (oldSz1 - 1LL)) - (oldSz2 * (oldSz2 - 1LL));
			//res += curFr;

			//cout << newSz << " " << curFr << endl;
		}
		set<int> clusters;
		vector<int> clusterSz;
		for (int i = 1; i <= n; i++)
		{
			int x = find(i);
			if (clusters.find(x) != clusters.end())
				continue;
			clusterSz.push_back(setSz[x]);
			clusters.insert(x);
		}
		sort(clusterSz.begin(), clusterSz.end());


		for (int i = clusterSz.size() - 1; i >= 0; i--)
		{
            
			for (int j = 2; j <= clusterSz[i]; j++)
			{
				curFr += j * (j - 1) - (j - 1) * (j - 2);
				res += curFr;
			}

		}
		res += curFr * same;


		cout << res << endl;
	}

	return 0;
}