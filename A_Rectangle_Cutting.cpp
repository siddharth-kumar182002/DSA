#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
int a,b;
cin>>a>>b;
if(a%2!=0 && b%2!=0){
    cout<<"No"<<endl;
    continue;
}

if(a%2==0 && a/2==b && b%2!=0){
    cout<<"No"<<endl;
    continue;
}
if(b%2==0 && b/2==a && a%2!=0){
    cout<<"No"<<endl;
    continue;
}

cout<<"Yes"<<endl;

}
return 0;
}