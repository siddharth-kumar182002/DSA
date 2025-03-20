#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n;
cin>>n;
map<string,long long > mp;
while(n--){
string s;
cin>>s;

if(mp[s]){
    string ans="";
    ans=s;
    ans+=(to_string(mp[s]));
    cout<<ans<<endl;
    mp[ans]++;
}
else{
    cout<<"OK"<<endl;
}
mp[s]++;
}
return 0;
}