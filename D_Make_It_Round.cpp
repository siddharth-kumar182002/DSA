#include <bits/stdc++.h>
using namespace std;
     
signed main() {

    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--){
        long long n, m;
        cin >> n >> m;
        long long x = 10, ans=n*m;
        for (int i = 1; i <=18; i++)
        {
              long long g=__gcd(x,n);
              long long k=x/g;
              if(k<=m){
                ans=k*(m/k)*n;
              }
              else{
                break;
              }
              x=x*10;
        }

        cout << ans << "\n";
    }
}