#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n;
cin>>n;
string s;
cin>>s;
map<long long ,long long> mp;
long long one=0;
long long zero=0;
long long maxi=0;
mp[0]=-1;
for (int i = 0; i < n; i++)
{
    if(s[i]=='1'){
        one++;
    }
    else{
        zero++;
    }
if(mp[zero-one]==0){
    mp[(zero-one)]=i+1;
}
else{
    if(mp[zero-one]==-1){
       maxi=max(maxi,(i+1)*1LL);
    }
    else{
    maxi=max(maxi,i-mp[zero-one]+1);
    }
}
}
cout<<maxi<<endl;

return 0;
}