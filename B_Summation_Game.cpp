#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,k,x;
cin>>n>>k>>x;
vector<long long> arr(n);

//1 2 3 4 5 6 
//3 3 3 7 15 32 
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

sort(arr.begin(),arr.end());
/*
for(auto x:arr){
    cout<<x<<" ";
}
cout<<endl;*/
long long ans=LONG_LONG_MIN;
vector<long long> prf(n+1,0);
for (int i = 1; i <=n; i++)
{
    prf[i]=prf[i-1]+arr[i-1];
}
/*
for(auto x:prf){
    cout<<x<<" ";
}
cout<<endl;*/

for (int i = n; i>=n-k; i--)
{
    long long neg=prf[i]-prf[max(0*1LL,i-x)];
    long long pos=prf[max(0*1LL,i-x)];
    long long res=pos-(neg);
   // cout<<res<<endl;
    ans=max(ans,res);
}

cout<<ans<<endl;






}
return 0;
}