#include <bits/stdc++.h>
using namespace std;
int main() {
double n,l;
cin>>n>>l;

vector<double> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

sort(arr.begin(),arr.end());
double maxi=max(arr[0],(l-arr[n-1]));

for (int i = 0; i < n-1; i++)
{
    double z=(((arr[i]+arr[i+1])/2)-arr[i]);
    //cout<<((arr[i]+arr[i+1])/2)<<" ";
   // cout<<z<<endl;
    maxi=max(maxi,z);
}
cout<<fixed<<setprecision(11)<<maxi<<endl;
return 0;
}