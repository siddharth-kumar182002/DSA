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
vector<long long> arr(n-1);

for (int i = 0; i <n-1; i++)
{
    cin>>arr[i];
}
vector<long long> ans;

ans.push_back(arr[0]+1);
// for(auto x:ans){
//     cout<<x<<" ";
// }
// cout<<endl;
for (int i = 0; i <n-1; i++)
{
    long long sz=ans.size();
  //  cout<<ans[sz-1]<<endl;
    if(arr[i]<(ans[sz-1])){
        ans.push_back(arr[i]+ans[sz-1]);
    }
    else{
        long long k=(arr[i]-ans[sz-1])/arr[i-1];
        k++;
        ans[ans.size()-1]+=(k*ans[sz-2]);
        ans.push_back(ans[sz-1]+arr[i]);
    }
}
for(auto x:ans){
    cout<<x<<" ";
}
cout<<endl;




}
return 0;
}