#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
	cin.tie(NULL);
long long x,n;
cin>>x>>n;

set<long long > s{0,x};
multiset<long long> gap{x};

for (int i = 0; i < n; i++)
{
    long long temp;
    cin>>temp;
auto it1=s.upper_bound(temp);
auto it2=it1;
it2--;

gap.erase(gap.find(*it1-*it2));
gap.insert(*it1-temp);
gap.insert(temp-*it2);

s.insert(temp);
auto ans = gap.end();
		ans--;
		cout << *ans << " ";
}
cout<<endl;


return 0;
}