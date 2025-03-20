#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n;
cin>>n;

vector<long long> arr(n);
map<long long,long long > mp;
for (int i = 0; i <n; i++)
{
   cin>>arr[i];
}
for (int i = 0; i <n; i++)
{
   long long x;
   cin>>x;
   mp[x]=i;
}
long long ans=0;
map<long long,long long> right;
for (int i = 0; i < n; i++)
{
    long long ind=mp[arr[i]];
    long long dist;
      if(ind>=i){
       dist=n-(ind-i);
      }
      else{
          dist=i-ind;
      }
      right[dist]++;
      ans=max(ans,right[dist]);
}
// map<long long,long long> left;
// for (int i = 0; i < n; i++)
// {
//     long long ind=mp[arr[i]];
//     long long dist;
//       if(ind>=i){
//        dist=n-(ind-i);
//       }
//       else{
//           dist=i-ind;
//       }
//       left[dist]++;
//       ans=max(ans,right[dist]);
// }
cout<<ans<<endl;




return 0;
}