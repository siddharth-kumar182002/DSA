#include <bits/stdc++.h>
using namespace std;

int main() {

  long long n;
  cin>>n;
  vector<long long> arr(n);
  map<long long,long long> mp;
  for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]==0){
      arr[i]=-1;
    }
    if(i>0){
      arr[i]=arr[i]+arr[i-1];
    }
    mp[arr[i]]++;
  }
  long long ans=0;
  for(auto x:mp){
    ans=ans+((x.second*(x.second-1))/2);
    if(x.first==0){
        ans=ans+x.second;
    }
  }
  cout<<ans<<endl;

  return 0;

}