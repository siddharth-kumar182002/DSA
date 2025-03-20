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
long long mini=1e10;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
//sort(arr.begin(),arr.end());
for (int i = 1; i < n; i++)
{
    long long maxi=-1;
maxi=max({maxi,arr[i],arr[i-1]});
mini=min(mini,maxi);
}

cout<<(mini-1)<<endl;
}
return 0;
}