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
map<long long,long long> mp;
mp[1]=1;
mp[2]=2;
mp[3]=1;
mp[4]=2;
mp[5]=3;
mp[6]=1;
mp[7]=2;
mp[8]=3;
mp[9]=2;
mp[10]=1;
mp[11]=2;
mp[12]=2;
mp[13]=2;
mp[14]=3;
mp[15]=1;
mp[16]=2;
mp[17]=3;
mp[18]=2;
mp[19]=3;
mp[20]=2;
mp[21]=2;
mp[22]=3;
mp[23]=4;
mp[24]=3;
mp[25]=2;
mp[26]=3;
mp[27]=4;
mp[28]=3;
mp[29]=4;
mp[30]=2;
long long ans=(n/15)-1;
n=n-15*((n/15)-1);
ans=ans+mp[n];

cout<<ans<<endl;

}
return 0;
}