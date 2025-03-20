#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
string s;
cin>>s;
vector<long long> arr(26,0);
for (int i = 0; i < n; i++)
{
    arr[s[i]-'a']++;
}
int cntPairs = 0, cntOdd = 0;
        for (int c : arr) {
            cntPairs += c / 2;
            cntOdd += c % 2;
        }
        int ans = 2 * (cntPairs / k);
        cntOdd += 2 * (cntPairs % k);
        if (cntOdd >= k) {
            ans++;
        }
        cout << ans <<endl;


}
return 0;
}