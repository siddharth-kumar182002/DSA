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
vector<long long> ans;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

for (int i = 1; i < n; i++)
{
    ans.push_back(arr[i]);
}
ans.push_back(arr[0]);

for(auto x:ans){
    cout<<x<<" ";
}
cout<<endl;

}
return 0;
}