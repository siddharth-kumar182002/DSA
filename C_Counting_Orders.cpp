#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){

    long long n, k;
    cin >> n >> k;
    long long ans = 0, cur = 1;
    while (cur < k) {
      cur *= 2;
      ++ans;
    }
    if (cur < n){ 
        long long a=(n-cur)/k;
        if((n-cur)%k==0){
            ans=ans+a;
        }
        else{
            ans=ans+a+1;
        }
        }
    
    cout << ans <<endl;
    

}
return 0;
}