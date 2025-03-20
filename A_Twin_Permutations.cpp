#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
int arr[n];
vector<int> ans;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    ans.push_back((n+1)-arr[i]);
}

for (int i = 0; i < n; i++)
{
cout<<ans[i]<<" ";
}
cout<<endl;

}
return 0;
}