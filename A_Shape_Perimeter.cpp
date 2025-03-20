#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,m;
cin>>n>>m;
long long ans=4*n*m;
for(int i=0;i<n;i++){
    long long x,y;
    cin>>x>>y;
if(i==0){
continue;
}

ans=ans-2*((m-x)+(m-y));

}
cout<<ans<<endl;
}
return 0;
}