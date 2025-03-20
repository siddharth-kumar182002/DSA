#include <bits/stdc++.h>
using namespace std;
long long low(vector<long long> &arr,long long t,long long n){
    long long lo=0;
long long hi=n-1;
long long mid;
while(hi-lo>1){
    mid=(hi+lo)/2;
    //cout<<"mid"<<mid<<endl;
    if(arr[mid]>t){
        hi=mid-1;
    }
    else{
        lo=mid;
    }
}
//cout<<"lo"<<lo<<endl;
if(arr[hi]<=t){
    return hi+1;
}
else if(arr[lo]<=t){
return lo+1;
}
else{
    return -1;
}
}
long long hi(vector<long long> &arr,long long t,long long n){
    long long lo=0;
long long hi=n-1;
long long mid;
while(hi-lo>1){
    mid=(hi+lo)/2;
    //cout<<"mid"<<mid<<endl;
    if(arr[mid]>=t){
        hi=mid;
    }
    else{
        lo=mid+1;
    }
}
//cout<<"lo"<<lo<<endl;
if(arr[lo]>=t){
    return lo+1;
}
else if(arr[hi]>=t){
return hi+1;
}
else{
    return -1;
}
}
int main() {

long long n;
cin>>n;
vector<long long> arr;
for (int i = 0; i < n; i++)
{
    long long temp;
    cin>>temp;
    arr.push_back(temp);
}
sort(arr.begin(),arr.end());
long long k;
cin>>k;
while(k--){
    long long l,r;
    cin>>l>>r;

  // cout<<hi(arr,l,n)<<endl;
  //cout<<low(arr,r,n)<<endl;
   if(low(arr,r,n)-hi(arr,l,n)<1 || low(arr,r,n)==-1 || hi(arr,l,n)==-1 ){
    cout<<0<<" ";
   }
   else{
    cout<<low(arr,r,n)-hi(arr,l,n)+1<<" ";
   }


}


return 0;
}