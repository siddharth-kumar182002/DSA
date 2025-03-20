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
sort(arr.begin(),arr.end());

if(n>1){
    long long x=arr[1];
    arr[1]=arr[n-1];
    arr[n-1]=x;
}


long long ans=0;
for (int i = 0; i < n; i++)
{
    long long maxi=-1;
    for (int j = 0;j<=i; j++)
    {
        maxi=max(maxi,arr[j]);
    }
    
    ans=ans+(maxi-arr[0]);
    
}

cout<<ans<<endl;

}
return 0;
}