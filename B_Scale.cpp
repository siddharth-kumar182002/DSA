#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
vector<string> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

vector<string> ans;

for (int i = 0; i < n; i+=k)
{
    string x="";
    for (int j= 0; j < n; j+=k)
    {
        x+=arr[i][j];
    }
    ans.push_back(x);
    
}

for(auto x: ans){
    cout<<x<<endl;
}



}
return 0;
}