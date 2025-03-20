#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
map<long long,long long> m;
vector<long long> arr(n+1);
long long mini=1e6;
for (int i = 1; i <=n; i++)
{
    cin>>arr[i];
    m[arr[i]]=i;
    
}
//cout<<arr[5]<<endl;
int ch=0;
long long ans=0;
for (int i = 1; i <=n; i++)
{
    if(abs(i-m[i])==0){
          continue;
    }
    ch=1;
    mini=min(mini,abs(i-m[i]));
ans=__gcd(ans,abs(i-m[i]));
    //cout<<abs(i-m[i])<<endl;
}
if(ch==1){
cout<<ans<<endl;
}
else{
    cout<<0<<endl;
}

}
return 0;
}