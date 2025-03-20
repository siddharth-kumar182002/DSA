#include <bits/stdc++.h>
using namespace std;

bool f(long long mid,vector<long long> arr){
if(mid==(-1)){
    return false;
}
long long n=arr.size();
long long maxi=arr[0];
long long f=0;
for (int i = 1; i < n; i++)
{
    
    if(arr[i]<maxi){
       long long add=(1LL<<mid)-1;
       if(add>=(maxi-arr[i])){
        arr[i]=maxi;
       }
       else{
        arr[i]+=add;
       }
    }
    maxi=max(maxi,arr[i]);
    
    
}
// maxi=arr[0];
// cout<<arr[0]<<" ";
// for (int i = 1; i < n; i++)
// {
//     cout<<arr[i]<<" ";
//     if(arr[i]<maxi){
//         f=1; 
//     }
//     else{
//         maxi=max(maxi,arr[i]);
//     }
// }
// cout<<endl;


if(!is_sorted(arr.begin(),arr.end())){
    return false;
}
else{
    return true;
}

}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long> arr(n);

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

long long l=-1;
long long r=60;

 //cout<<f(1,arr)<<endl;
while(l+1<r){
    long long mid=(l+r)/2;

    if(f(mid,arr)){
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