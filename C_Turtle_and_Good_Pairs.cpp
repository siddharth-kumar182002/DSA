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
vector<long long> count(26,0);
for (int i = 0; i < n; i++)
{
    count[s[i]-'a']++;
}

string ans="";
long long x=0;
while(x==0){

long long f=0;
for (int i = 0; i < 26; i++)
{
    if(count[i]>0){
        f=1;
       count[i]--;
       ans=ans+char('a'+i);
    }
}
if(f==0){
    x=1;
}
}

cout<<ans<<endl;

}
return 0;
}