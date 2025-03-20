#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
long long arr[n];
for (int i = 0; i <n; i++)
{
    cin>>arr[i];
}
//cout<<arr[1]<<endl;
partial_sum(arr,arr+n,arr);
//cout<<arr[1]<<endl;

long long maxi=-1e8;
for (int i = 0; i <=n-2; i++)
{
    long long a=__gcd(arr[i],(arr[n-1]-arr[i]));
    maxi=max(maxi,a);
}
cout<<maxi<<endl;


 
}
return 0;
}