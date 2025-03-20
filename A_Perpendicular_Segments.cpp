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
if(x<=y){
cout<<0<<" "<<0<<" "<<x<<" "<<x<<endl;
cout<<x<<" "<<0<<" "<<0<<" "<<x<<endl;
}
else{
cout<<0<<" "<<0<<" "<<y<<" "<<y<<endl;
cout<<y<<" "<<0<<" "<<0<<" "<<y<<endl;
}

}
return 0;
}