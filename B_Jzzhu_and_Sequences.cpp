#include <bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long x,y;
cin>>x>>y;
vector<long long> arr(6,0);
arr[0]=(x+mod)%mod;
arr[1]=(y+mod)%mod;
for(int i=2;i<6;i++){
     arr[i]=(arr[i-1]%mod-arr[i-2]%mod+mod)%mod;
    
    
}

long long n;
cin>>n;
n=n-1;
n=n%6;
cout<<arr[n]<<endl;

return 0;
}