#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,k,p;
cin>>n>>k>>p;
k=abs(k);
long long ans=0;
ans+=k/p;
k=k%p;

if(k>0){
    ans++;
}
if(ans<=n){
cout<<ans<<endl;
}
else{
    cout<<-1<<endl;
}
}
return 0;
}