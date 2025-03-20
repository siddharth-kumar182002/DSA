#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int > arr(n+1);
arr[0]=0;
unordered_multiset<long long> mp;
for (int i = 1; i <=n; i++)
{
    cin>>arr[i];
    mp.insert(arr[i]);
    arr[i]=arr[i]+arr[i-1];
    
}
int ans=0;
for (int i = 1; i <=n; i++)
{
    for (int j = i+1; j <=n; j++)
    {
      int x=arr[j]-arr[i-1]; 
      if(mp.count(x)!=0){
        ans=ans+mp.count(x);
      mp.erase(x);
      }
    }
    
}
cout<<ans<<endl;


}
return 0;
}