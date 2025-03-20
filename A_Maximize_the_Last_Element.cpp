#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
long long ans=-1;
for (int i = 0; i <n; i++)
{
    long long a=i;
    long long b=n-i-1;
    if(a%2==0 && b%2==0){
        ans=max(ans,arr[i]);
    }
}
cout<<ans<<endl;
}
return 0;
}