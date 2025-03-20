#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,x,m;
cin>>n>>x>>m;
long long l=x-1;
long long r=x-1;

for (int i = 0; i <m; i++)
{
long long a,b;
cin>>a>>b;

if((b-1)< l || (a-1)>r){
    continue;
}

l=min(l,a-1);
r=max(r,b-1);
    
//cout<<l<<" "<<r<<endl;
}
cout<<(r-l+1)<<endl;
}
return 0;
}