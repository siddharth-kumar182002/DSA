#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
vector<long long> arr1;
vector<long long> arr2;
for (int i = 0; i < n; i++)
{
    long long temp;
    cin>>temp;
    if(temp<=0){
        arr1.push_back(abs(temp));
    }
    else{
        arr2.push_back(abs(temp));
    }
}

sort(arr1.begin(),arr1.end());
sort(arr2.begin(),arr2.end());
long long ans = 0, mx = -1e9;
  for (int i = arr1.size() - 1; i >= 0; i -= k) {
    ans += 2 * arr1[i];
    mx = max(mx, arr1[i]);
  }
  for (int i = arr2.size() - 1; i >= 0; i -= k) {
    ans += 2 * arr2[i];
    mx = max(mx, arr2[i]);
  }
  cout << ans - mx << '\n';

}
return 0;
}