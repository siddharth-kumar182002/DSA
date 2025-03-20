#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;

vector<long long> arr(n);
long long mini=LONG_LONG_MAX;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    mini=min(mini,arr[i]);
}

if(k>=3){
    cout<<0<<endl;
    continue;
}


vector<long long> diff;

for (int i = 0; i < n; i++)
{
    for (int j = i+1; j < n; j++)
    {
        diff.push_back(abs(arr[i]-arr[j]));
    }
    
}
sort(diff.begin(),diff.end());
sort(arr.begin(),arr.end());
if(k==1){
    cout<<min(mini,diff[0])<<endl;
    continue;
}

long long ans=LONG_LONG_MAX;
ans=min(ans,diff[0]);
ans=min(ans,mini);
long long temp=LONG_LONG_MAX;
//cout<<ans<<endl;

for (int i = 0; i < diff.size(); i++)
{
   // cout<<"i="<<i<<endl;

    long long x=diff[i];
    long long ind=lower_bound(arr.begin(),arr.end(),x)-arr.begin();
  //  cout<<"ind="<<ind<<endl;
  if(ind<n){
       temp=min(temp,abs(diff[i]-arr[ind]));
  }
       if(ind-1>=0){
        temp=min(temp,abs(diff[i]-arr[ind-1]));
       }
      // cout<<"i="<<i<<endl;

       ans=min(ans,temp);
}

cout<<ans<<endl;




}
return 0;
}