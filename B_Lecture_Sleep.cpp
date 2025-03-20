#include <bits/stdc++.h>
using namespace std;

int main() {
int n,k;
cin>>n>>k;
vector<int> arr(n);
int sum=0;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
vector<int> arr1(n);
for (int i = 0; i < n; i++)
{
    cin>>arr1[i];
    if(arr1[i]==1){
        sum=sum+arr[i];
        arr[i]=0;
    }
}

partial_sum(arr.begin(),arr.end(),arr.begin());

int add=arr[k-1];
for (int i = k; i < n; i++)
{
    add=max(add,arr[i]-arr[i-k]);
}
cout<<sum+add<<endl;


return 0;
}