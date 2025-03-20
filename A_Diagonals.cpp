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
for (int i = n; i >=1; i--)
{
     if(i==n){
        if(k>0){
        ans++;
        k=max(0*1LL,(k-i));
        }
     }
     else{
        if(k>0){
            ans++;
            k=max(0*1LL,(k-i));
        }
        if(k>0){
            ans++;
            k=max(0*1LL,(k-i));
        }
     }
}
cout<<ans<<endl;
}
return 0;
}