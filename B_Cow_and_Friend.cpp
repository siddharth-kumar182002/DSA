#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,x;
cin>>n>>x;
vector<long long> arr(n);
long long mini=1e10;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    long long lg=arr[i];

long long y=x-lg;
long long ans=0;
long long z=y/lg;
if(y%lg==0){
ans=ans+z+1;
}
else{
ans=z+2;
}
mini=min(mini,ans);
}
//sort(arr.begin(),arr.end());

cout<<mini<<endl;

}
return 0;
}