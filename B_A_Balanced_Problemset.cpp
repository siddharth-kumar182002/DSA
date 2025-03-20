#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long u,n;
cin>>u>>n;
long long ans=u/n;
long long mod=u%n;
long long k=0;
long long x=(k*ans-mod);
while(!(x%(k+n)==0)){
   // cout<<k<<endl;
    k++;
    x=(k*ans-mod);
}
 long long finl =(k*ans-mod)/(k+n);
cout<<ans-finl<<endl;

}
return 0;
}