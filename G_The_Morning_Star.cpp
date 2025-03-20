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
map<long long,long long> m1;
map<long long,long long> m2;
map<long long,long long> m3;
map<long long,long long> m4;

for (int i = 0; i < n; i++)
{
    long long a,b;
    cin>>a>>b;
    m1[a]++;
    m2[b]++;
    m3[a+b]++;
    m4[b-a]++;
}
long long ans=0;
for(auto x: m1){
      ans=ans+((x.second)*(x.second-1))/2;
}
for(auto x: m2){
      ans=ans+((x.second)*(x.second-1))/2;
}
for(auto x: m3){
      ans=ans+((x.second)*(x.second-1))/2;
}
for(auto x: m4){
      ans=ans+((x.second)*(x.second-1))/2;
}
cout<<2*ans<<endl;
}
return 0;
}