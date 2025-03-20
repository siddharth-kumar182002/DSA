#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> diff(n + 2);
	// read input and build difference array
	for (int i = 0; i < k; i++) {
		int l, r;
		cin >> l >> r;
		l;  // make zero-indexed
		r;
		diff[l]++;
		diff[r + 1]--;
	}
/*cout<<1<<endl;
for(auto &x:diff){
    cout<<x<<" ";
}*/
cout<<endl;
for (int i = 0; i < n; i++)
{
    diff[i+1]=diff[i]+diff[i+1];
}
/*for(auto &x:diff){
    cout<<x<<" ";
}
cout<<endl;*/

diff[0]=-1;
diff[n+1]=1e6;

sort(diff.begin(),diff.end());
/*for(auto &x:diff){
    cout<<x<<" ";
}
cout<<endl;*/
cout<<diff[((n+2+1)/2-1)]<<endl;
}