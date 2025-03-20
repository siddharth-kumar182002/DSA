#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
string s;
cin>>s;
vector<long long > arr(26,0);
for (int i = 0; i < s.size(); i++)
{
    arr[s[i]-'a']++;
}

char x;
for (int i = 0; i < 26; i++)
{
    if(arr[i]==0){
        x='a'+i;
    }
}
string ans="";
ans+=s[0];
long long f=0;
for (int i = 1; i < s.size(); i++)
{
    if(s[i]==s[i-1] && f==0){
        ans+=x;
        ans+=s[i];
        f=1;
        continue;
    }

    ans+=s[i];
}
if(ans.size()==1 || f==0){
    ans+=x;
}

cout<<ans<<endl;




}
return 0;
}