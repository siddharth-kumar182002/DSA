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
long long maxi=-1;
long long ans=0;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    if(i<(n-1)){
        maxi=max(maxi,arr[i]);
    }
}
ans=arr[n-1];
ans=ans+maxi;
cout<<ans<<endl;

}
return 0;
}