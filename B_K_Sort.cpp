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
for (int i = 0; i <n; i++)
{
    cin>>arr[i];
}

long long maxi=arr[0];
map<long long,long long> mp;
long long currsize=0;
for (int i = 1; i <n; i++)
{
    if(arr[i]<maxi){
          long long diff=maxi-arr[i];
          mp[diff]++;
          currsize++;
    }
    else{
        maxi=max(maxi,arr[i]);
    }
}
// for(auto x:mp){
//     cout<<x.first<<" "<<x.second<<endl;
// }
// cout<<endl;
long long ans=0;
long long temp=-1;

for(auto x:mp){
long long a=x.first;
long long b=x.second;
 long long q=a;
if(temp!=-1){
   
a=a-temp;
}
temp=q;

ans+=a*(currsize+1);
// cout<<"temp="<<temp<<endl;
// cout<<"ans="<<ans<<endl;
// cout<<"CURR="<<currsize<<endl;
currsize-=b;

}

cout<<ans<<endl;
}
return 0;
}