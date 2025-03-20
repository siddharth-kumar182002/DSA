#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long a,b,n;
cin>>a>>b>>n;
vector<long long> arr(n);
long long ans=b;

for (int i = 0; i <n; i++)
{
    cin>>arr[i];
    if((arr[i]+1)>=a){
     ans=ans+(a-1);
    }
    else{
    ans=ans+arr[i];
    }
}
cout<<ans<<endl;
}
return 0;
}