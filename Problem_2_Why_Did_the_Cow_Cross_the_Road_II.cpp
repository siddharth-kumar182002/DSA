#include <bits/stdc++.h>
using namespace std;
void setIO(string prob) {
	freopen((prob + ".in").c_str(), "r", stdin);
	freopen((prob + ".out").c_str(), "w", stdout);
}
int main() {
	setIO("maxcross");
long long n,k,b;
cin>>n>>k>>b;
vector<long long> arr(n+1,1);
arr[0]=0;
while(b--){
	long long x;
	cin>>x;
	arr[x]=0;
}
//cout<<arr[2]<<endl;
for (int i = 0; i < n; i++)
{
	arr[i+1]=arr[i+1]+arr[i];

}
/*for(auto &x:arr){
	cout<<x<<" ";
}
cout<<endl;*/
long long ans=1e5;

for (int i = 1; (i+k-1)<=n; i++)
{
	//cout<<"i="<<i<<endl;
	ans=min(ans,(k-(arr[i+k-1]-arr[i-1])));
	//cout<<(k-(arr[i+k-1]-arr[i-1]))<<" ";
	//cout<<ans<<endl;
}

cout<<ans<<endl;

return 0;
}