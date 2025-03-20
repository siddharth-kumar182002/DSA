#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
/////bbbbbbaaaaaabbbbbbbbb
//aaaabaaabaaaaaaa

string s;
cin>>s;
vector<long long> st;
long long count=0;
for (int i = 0; i < s.size(); i++)
{
    if(s[i]=='B'){
        count++;
        continue;
    }
    long long a=0;
    while(s[i]=='A' && i<s.size()){
        a++;
        i++;
    }
    i--;
    st.push_back(a);
}
sort(st.begin(),st.end());
long long ans=0;
for (int i = st.size()-1; i >=0; i--)
{
    if(count==0){
        break;
    }
    ans=ans+st[i];
    count--;
}
cout<<ans<<endl;

}
return 0;
}