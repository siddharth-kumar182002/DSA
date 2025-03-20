#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long double n, k;
        cin >> n >> k;
       long long f = ceil(n/k);
        k =k * f;
        long long ans =ceil(k/n);
        cout  << ans << endl; 
}
return 0;
}