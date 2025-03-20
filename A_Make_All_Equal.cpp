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

vector<long long> ans;
for(auto x:mp){
   // cout<<x.second<<endl;
    ans.push_back(x.second);
}
sort(ans.begin(),ans.end());
long long sum=0;
for (int i = 0; i < ans.size()-1; i++)
{
    sum=sum+ans[i];
}
cout<<sum<<endl;


}
return 0;
}