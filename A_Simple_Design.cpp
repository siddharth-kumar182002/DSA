#include <bits/stdc++.h>
using namespace std;
long long sum(long long x){
    long long ans=0;
    while(x>0){
        ans=ans+x%10;
        x=x/10;
    }
    return ans;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long x,k;
cin>>x>>k;
while(sum(x)%k!=0){
    x++;
}
cout<<x<<endl;
}
return 0;
}