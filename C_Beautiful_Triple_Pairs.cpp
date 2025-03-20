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
vector<long long> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
long long ans=0;
map<pair<long long,pair<long long,long long>>,long long> mp;
map<pair<long long,pair<long long,long long>>,long long> mp1;
for (int i = 0; i < n-2; i++)
{
    long long x=arr[i];
    long long y=arr[i+1];
    long long z=arr[i+2];
     pair<long long,pair<long long,long long>> p1={x,{y,0}};
       pair<long long,pair<long long,long long>> p2={x,{0,z}};
         pair<long long,pair<long long,long long>> p3={0,{y,z}};
  pair<long long,pair<long long,long long>> p4={x,{y,z}};

  ans=ans+(mp[p1]+mp[p2]+mp[p3]-3*mp1[p4]);
  mp1[p4]++;
  mp[p1]++;
   mp[p2]++;
   mp[p3]++;
 
     
}


cout<<ans<<endl;

}
return 0;
}