#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n;
cin>>n;
vector<long long> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
vector<long long> arr1(n,0);
arr1[0]=1;
long long maxi=1;
for (int i = 1; i <n; i++)
{
    if(arr[i]>arr[i-1]){
        arr1[i]=arr1[i-1]+1;
    }
    else{
        arr1[i]=1;
    }
    maxi=max(maxi,arr1[i]);
}
/*
for(auto x:arr1){
    cout<<x<<" ";
}
cout<<endl;*/
vector<long long > arr2(n,0);
arr2[n-1]=1;
for (int i = n-2; i >=0 ; i--)
{
    if(arr[i]<arr[i+1]){
          arr2[i]=arr2[i+1]+1;
    }
    else{
        arr2[i]=1;
    }
}
/*
for(auto x:arr2){
    cout<<x<<" ";
}
cout<<endl;*/
for (int i = 0; i < n; i++)
{
    long long l=0;
    long long r=0;
    if(i-1>=0){
        l=arr1[i-1];
    }
    if(i+1<n){
       r=arr2[i+1];
    }
    if(i-1>=0 && i+1<n && arr[i-1]<arr[i+1]){
        maxi=max(maxi,l+r);
    }


}
cout<<maxi<<endl;

return 0;
}