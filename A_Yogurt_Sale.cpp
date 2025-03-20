#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,a,b;
cin>>n>>a>>b;
if(2*a<=b){
    cout<<a*n<<endl;
}
else{
    if(n%2==0){
        cout<<((n/2)*b)<<endl;
    }
    else{
        long long x=((n/2)*b)+a;
        cout<<x<<endl;
    }
}
}
return 0;
}