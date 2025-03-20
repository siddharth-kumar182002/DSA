#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,m,r,c;
cin>>n>>m>>r>>c;
long long j=n*m;
long long i=(r-1)*m+c;
long long k=(n-r)*(m-1);

cout<<(j-i+k)<<endl;
}
return 0;
}