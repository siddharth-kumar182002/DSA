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
map<long long,long long> mp;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    mp[i+1]=arr[i];
}
string s;
cin>>s;
vector<long long> ans(n+1,0);
vector<long long> vis(n+1,0);
long long f=0;

    long long x;
for (int i = 1; i <=n; i++)
{
    if(vis[i]==0){
        x=i;
       vector<long long> temp;
temp.clear();
long long count=0;
while(!vis[x]){
      vis[x]=1;
    if(s[x-1]=='0'){
        count++;
    }
    x=mp[x];
  
    temp.push_back(x);
}
for(auto x:temp){
   
    ans[x]=count;
}
    }
}








for (int i = 1; i <=n; i++)
{
    cout<<ans[i]<<" ";
}
cout<<endl;


}
return 0;
}