#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin>> arr[i];
    }
    sort(arr.begin(), arr.end());
    int gcd = arr[0];
    bool ans = true;
    for(int i = 1; i < n; i++){
        gcd = __gcd(arr[i], gcd);
        if(gcd > i+1){
            ans = false;
            break;
        }
    }
    if(ans){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
return 0;
}