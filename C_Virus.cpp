#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n,m;
cin>>n>>m;
vector<long long> arr(m);

for (int i = 0; i < m; i++)
{
      cin>>arr[i];
}
sort(arr.begin(),arr.end());
long long f=arr[0];
long long l=arr[m-1];
for(int i = 0; i <m-1; i++)
{
    arr[i]=arr[i+1]-arr[i]-1;
}

arr[m-1]=f-1+n-l;
sort(arr.begin(),arr.end());
long long count=0;
long long save=0;
for (int i = m-1; i >=0 ; i--)
{
    if(arr[i]-(2*count)>=3){
        save=save+arr[i]-(2*count)-1;
        count=count+2;
    }
    else if(arr[i]-(2*count)>=1){
        save=save+1;
        count=count+1;
    }
    else {
        break;
    }
}

cout<<n-save<<endl;




}
return 0;
}