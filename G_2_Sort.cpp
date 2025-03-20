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
vector<long long>arr(n);


for (int i = 0; i < n; i++)
{
cin>>arr[i];
}
long long len=1;
long long ans=0;
long long f=1;
for (int i = 0; i < n-1; i++)
{
    if(2*arr[i+1]>arr[i]){
        len++;
    }
    else{
            if(len>=k+1){
            ans=ans+(len-k);
            }
            len=1;
          if(i+1>=n-k){
            f=1;
            break;
          }
    }
}
if(f==1){
    if(len>=k+1){
        ans=ans+(len-k);
    }
}

cout<<ans<<endl;
}
return 0;
}