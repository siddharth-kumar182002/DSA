
#include <bits/stdc++.h>

using namespace std;


int main() {
    long long t;
    cin>>t;
    while(t--){
        int n;
  cin >> n;
  if (n % 2 == 0) {
    cout << "NO"<<endl;
    continue;
  }
  cout << "YES"<<endl;
  int l = 1;
  int r = (3 * n + 1) / 2;
  while (l <= n) {
    cout << l << ' ' << r << '\n';
    l += 2;
    r--;
  }
  l = 2;
  r = 2 * n;
  while (l <= n) {
    cout << l << ' ' << r << '\n';
    l += 2;
    r--;
  }
    }
  
}