#include <bits/stdc++.h>
using namespace std;

long long f(long long mid,long long k ,vector<long long> &arr){

    for (int i = 1; i < arr.size(); i++)
    {
        long long x=arr[i]-arr[i-1];
        long long y=arr[i-1]+mid;
        if((100*x)>(y*k)){
                 return false;;
        }
    }
    return true;
    
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
vector<long long> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    if(i>0){
        arr[i]=arr[i]+arr[i-1];
    }
}
long long l=-1;
long long r=1e11;
while(l+1<r){
    long long mid=(l+r)/2;
    if(f(mid,k,arr)){
         r=mid;
    }
    else{
         l=mid;
    }
}
cout<<r<<endl;
}
return 0;
}