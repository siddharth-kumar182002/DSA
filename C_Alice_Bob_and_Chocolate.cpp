#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin>>n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    long long l=0;
    long long r=n-1;
    while(r>l){
        if((r-l)==1){
            break;
        }
         long long x=min(arr[r],arr[l]);
         if(arr[l]>arr[r]){
            arr[l]=arr[l]-x;
             arr[r]=arr[r]-x;
            r--;
         }
         else if(arr[l]<arr[r]){
            arr[l]=arr[l]-x;
            arr[r]=arr[r]-x;
            l++;
         }
         else{
            l++;
            r--;
            if(l==r){
            break;
        }
         }
         //cout<<"l="<<l<<" r="<<r<<" "<<endl;
    }
    cout<<(l+1)<<" "<<n-(l+1)<<endl;
    
return 0;
}