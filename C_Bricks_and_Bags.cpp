#include <bits/stdc++.h>
using namespace std;
int main() {
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
long long arr[n];
long long maxy=-1;
long long y;

for (long long i = 0; i < n; i++)
{
    cin>>arr[i];
}
sort(arr,arr+n);


for (long long i = n; i>=2; i--)
{
     y=abs(arr[i-1]-arr[0])+abs((arr[i-1]-arr[i-2]));
     //cout<<"y="<<y<<endl;
maxy=max(y,maxy);

}

//long long x=(arr[n-1]-arr[0])+((arr[1]-arr[0]));


cout<<maxy<<endl;
}
return 0;
}