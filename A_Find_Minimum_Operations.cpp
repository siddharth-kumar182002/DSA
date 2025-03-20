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

long long x=1;
while(x<n && k!=1){
    x=x*k;
}


while(n!=0){
     //cout<<"x="<<x<<endl;
    if(n>=x){
        ans=ans+(n/x);
    n=n-(x)*(n/x);
    
    }
    
    x=x/k;
    
   
    // cout<<ans<<endl;
    // cout<<n<<endl;
}
cout<<ans<<endl;

}
return 0;
}