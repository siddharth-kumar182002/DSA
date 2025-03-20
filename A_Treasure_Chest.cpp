#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long x,y,k;
cin>>x>>y>>k;

if(x>y){
    cout<<x<<endl;
}
else{
    cout<<y+max(0*1LL,(y-(x+k)))<<endl;
}

}
return 0;
}