#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long a,b,n,m;
cin>>a>>b>>n>>m;
if(min(a,b)>=m && (a+b)>=(n+m)){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
return 0;
}