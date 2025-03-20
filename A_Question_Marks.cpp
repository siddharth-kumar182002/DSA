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
long long ans=0;
map<long long,long long> mp;
string s;
cin>>s;
long long count=0;
for (int i = 0; i < 4*n; i++)
{
    if(s[i]!='?'){
        mp[s[i]-'A']++;
    }
    else{
        count++;
    }
}

for(auto x:mp){

    if(x.second>n){
        ans=ans+(x.second-n);
    }
}
cout<<(4*n-ans-count)<<endl;

}
return 0;
}