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
vector<long long> arr(n);
long long x=0;
long long ans=0;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    if(arr[i]>=k){
        x=x+arr[i];
        
    }
    else{
    if(arr[i]==0 && x>0){
           x--;
           ans++;
    }
    }
}
cout<<ans<<endl;

}
return 0;
}