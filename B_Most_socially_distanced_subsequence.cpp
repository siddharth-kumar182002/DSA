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
vector<long long > ans;
ans.push_back(arr[0]);
for (int i = 1; i <n-1; i++)
{
    if((arr[i]>arr[i+1] && arr[i]>arr[i-1]) || (arr[i]<arr[i+1] && arr[i]<arr[i-1])){
                 ans.push_back(arr[i]);
    }
}
ans.push_back(arr[n-1]);
cout<<ans.size()<<endl;
for(auto x:ans){
    cout<<x<<" ";
}
cout<<endl;
}
return 0;
}
LONG_LONG_MIN