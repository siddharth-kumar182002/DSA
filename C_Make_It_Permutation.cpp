#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n,c,d;
cin>>n>>c>>d;
vector<int> v(n);
map<int,int> cnt;

for(auto &x: v){
    cin>>x;
    cnt[x]++;
}

  long long ans = n*c+d , pres = 0 , extra = 0 ,  already = 0 , re = 0;
    for(auto x : cnt){
        
        long long cost = 0;
        pres++;
        cost += (x.first - pres )*d;
        already += x.second;

        re += x.second -1;
        cost += (n - already + re)*c;

        ans = min(ans , cost);
        
    }
    cout << ans <<endl;
}
return 0;
}