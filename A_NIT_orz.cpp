#include <bits/stdc++.h>
using namespace std;
int main() {long long t;
cin>>t;
while(t--){
long long n,z;
cin>>n>>z;
long long arr[n];


for (long long i = 0; i < n; i++)
{
    cin>>arr[i];
    arr[i]=arr[i]|z;
}
sort(arr,arr+n);
cout<<arr[n-1]<<endl;



}
return 0;
}