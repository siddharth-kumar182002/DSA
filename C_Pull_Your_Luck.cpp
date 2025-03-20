#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n,x,p;
    cin >> n >> x >> p;
 
    string ans = "No";
    for(long long i=1;i<=min(2*n,p);i++) {
        long long force = i*(i+1)/2;
 
        if((x+force)%n == 0) {
            ans = "Yes";
            break;
        }
    }
    cout<<ans<<endl;
}
return 0;
}