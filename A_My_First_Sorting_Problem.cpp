#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long x,y;
cin>>x>>y;
cout<<min(x,y)<<" "<<max(x,y)<<endl;
}
return 0;
}