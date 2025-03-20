#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,m;
cin>>n>>m;
if(n<m){
    cout<<"NO"<<endl;
}
else if(n==m){
    cout<<"YES"<<endl;
}
else{
    if((n-m)%2==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
}
return 0;
}