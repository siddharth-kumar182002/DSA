#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
    long long n,k;
    cin>>n>>k;

long long ans=1;
if(log2(n)<k){
    ans=n+1;
}
else{
    for (int i = k; i >=1; i--)
    {
        ans=ans*2;
    }
    
}
cout<<ans<<endl;
}
return 0;
}