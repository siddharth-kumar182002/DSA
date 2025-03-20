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
string s;
cin>>s;
map<char,int> mp;
long long ans=INT_MAX;


for (int r = 0; r <n; r++)
{
    mp.clear();
    mp[s[r]-'a']++;
   for (int i = r+1; i <min(n,(r+7)*1LL); i++)
   {
       mp[s[i]-'a']++;
       if(mp[0]>mp[1] && mp[0]>mp[2]){
        ans=min(ans,(i-r+1)*1LL);
       }

   }
   

}
if(ans==INT_MAX){
    ans=-1;
}
cout<<ans<<endl;

}
return 0;
}