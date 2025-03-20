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
vector<double> arr(n);
map<double,long long> mp;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    double x=log2(arr[i])-arr[i];
    mp[x]++;
}

long long ans=0;
for(auto x : mp){
   // cout<<x.first<<" "<<x.second;
    long long y=(x.second);
    ans=ans+((y)*(y-1))/2;
}
cout<<ans<<endl;

}
return 0;
}