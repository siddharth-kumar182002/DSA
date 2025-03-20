#include <bits/stdc++.h>
using namespace std;
int main() {
long long n;
cin>>n;

vector<long long > arr(n+1);
for (int i = 1; i <=n; i++)
{
       cin>>arr[i];
       
}
//cout<<"curr"<<curr<<endl;
sort(arr.begin(),arr.end());
long long median=arr[(n/2)+1];
long long ans=0;
for (int i = 1; i <=n; i++)
{
   // cout<<"arr="<<arr[i]<<" ";
    ans=ans+abs(arr[i]-median);
}

cout<<ans<<endl;


return 0;
}