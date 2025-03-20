#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,m;
cin>>n>>m;
string s;
cin>>s;
map<long long,long long> mp;
for (int i = 0; i < n; i++)
{
    mp[s[i]-'A']++;
}

long long ans=0;
ans=ans+max(0*1LL,(m-(mp[0])));
ans=ans+max(0*1LL,(m-(mp[1])));
ans=ans+max(0*1LL,(m-(mp[2])));
ans=ans+max(0*1LL,(m-(mp[3])));
ans=ans+max(0*1LL,(m-(mp[4])));
ans=ans+max(0*1LL,(m-(mp[5])));
ans=ans+max(0*1LL,(m-(mp[6])));
cout<<ans<<endl;

}
return 0;
}