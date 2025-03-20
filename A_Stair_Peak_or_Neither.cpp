#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long a,b,c;
cin>>a>>b>>c;
if(b>a && c>b){
    cout<<"STAIR"<<endl;
    continue;
}
if(b>a && c<b){
    cout<<"PEAK"<<endl;
    continue;
}
    cout<<"NONE"<<endl;
    

}
return 0;
}