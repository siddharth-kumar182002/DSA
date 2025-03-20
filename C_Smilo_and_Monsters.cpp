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
vector<long long > arr(n);
long long sum=0;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    sum=sum+arr[i];
}
sort(arr.begin(),arr.end());
long long ans=0;
if(sum%2!=0){
    ans++;
}
ans=ans+sum/2;
sum=sum/2;
long long r=n-1;
while(sum>0){
sum=sum-arr[r];
ans++;
r--;

}
cout<<ans<<endl;
}
return 0;
}