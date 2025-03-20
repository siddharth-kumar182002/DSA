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

map<long long,long long> mp;
for (int i = 0; i <n; i++)
{
    cin>>arr[i];
    long long x=arr[i];
  
    for (int j = 0; j <=30; j++)
    {
        x=x^(1LL<<j);
    }
 //   cout<<"i="<<i<<" "<<x<<endl;
    mp[x]++;
    
}
long long ans=0;
for (int i = 0; i < n; i++)
{
    if(mp[arr[i]]>0){
        ans++;
          mp[arr[i]]--;
    }
}
cout<<(n-(ans/2))<<endl;


}
return 0;
}