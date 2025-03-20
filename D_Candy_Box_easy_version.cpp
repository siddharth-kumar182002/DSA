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
map<long long,long long> mp;
for (int i = 0; i < n; i++)
{
    long long x;
    cin>>x;
    mp[x]++;
}

vector<long long > arr;
for(auto x:mp){
    arr.push_back(x.second);
}
sort(arr.begin(),arr.end());
long long prv=arr.back();
long long ans=prv;
for (int i = arr.size()-2; i>=0; i--)
{
    if(prv==0){
        break;
    }
      if(arr[i]>=prv){
        ans=ans+prv-1;
        prv=prv-1;
      }
      else{
        ans=ans+arr[i];
        prv=arr[i];
      }
      
}
cout<<ans<<endl;





}
return 0;
}