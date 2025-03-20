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

long long ans=0;

while(n>k){
    ans++;
    n=n-(k-1);
   // cout<<n<<endl;
}
if(n>1){
    ans++;
}
cout<<ans<<endl;

}
return 0;
}