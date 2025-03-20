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
vector<long long> ans;
for (int i = 0; i < n; i++)
{
    string s;
    cin>>s;
    for (int j = 0; j < 4; j++)
    {
        if(s[j]=='#'){
             ans.push_back(j+1);
             break;
        }
    }
    
}
reverse(ans.begin(),ans.end());
for(auto x:ans){
    cout<<x<<" ";
}
cout<<endl;
}
return 0;
}