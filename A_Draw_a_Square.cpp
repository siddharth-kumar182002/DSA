#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long l,r,u,d;
cin>>l>>r>>u>>d;
if(l==r && r==u && u==d && d==l){
    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}
}
return 0;
}