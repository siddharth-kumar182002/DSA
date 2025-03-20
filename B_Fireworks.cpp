#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long a,b,m;
cin>>a>>b>>m;
long long ans=2;
ans+=m/a;
ans=ans+m/b;
cout<<ans<<endl;
}
return 0;
}