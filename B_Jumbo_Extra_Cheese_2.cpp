#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
long long arr[n][2];
long long sum=0;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < 2; j++)
    {
        cin>>arr[i][j];
        
    }
    if(arr[i][0]<arr[i][1]){
        swap(arr[i][0],arr[i][1]);
    }
    
    sum=sum+arr[i][1];
}

sum=2*sum;
long long arr2[n];
for (int i = 0; i < n; i++)
{
    arr2[i]=arr[i][0];

}
sort(arr2,arr2+n);
for (int i = 0; i < (n-1); i++)
{
    sum=sum+(arr2[i+1]-arr2[i]);
}
cout<<sum+arr2[0]+arr2[n-1]<<endl;












}
return 0;
}