#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
vector<long long> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
long long maxi=*max_element(arr.begin(),arr.end());

long long lo=maxi;
long long hi=maxi+k+1;

while(hi-lo>1){
    long long mid=(hi+lo)/2;
bool good=false;
//cout<<"mid="<<mid<<endl;
for (int i = 0; i < n; i++)
{
    long long need=mid;
    long long ops=0;
    for (int j = i; j < n; j++)
    {
        if(arr[j]>=need){
             if(ops<=k){
          good=true;
             }
             else{
                break;
             }
        }
        ops+=need-arr[j];
        need--;
        need=max(need,1LL);
    }
    //cout<<"i="<<i<<endl;
    //cout<<"ops="<<ops<<endl;
    
}
//cout<<good<<endl;

if(good){
    lo=mid;
}
else{
    hi=mid;
}
}
cout<<lo<<endl;
}
return 0;
}