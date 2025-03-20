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
vector<long long> arr(26,0);
vector<long long> vis(26,0);
long long ans=0;
for (int i = 0; i < n; i++)
{
    arr[s[i]-'A']++;
    if(arr[s[i]-'A']>=((s[i]-'A')+1) && !vis[s[i]-'A']){
        ans++;
        vis[s[i]-'A']=1;
    }
}
cout<<ans<<endl;
}
return 0;
}