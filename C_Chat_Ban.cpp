#include <bits/stdc++.h>
using namespace std;
long long get(long long x) {
    return x * 1ll * (x + 1) / 2;
}
long long f(long long k,long long mid){
    if(mid<=k){
     return get(mid);
    }
    else{
        long long n=mid-k;
         return (get(k) + get(k - 1) - get(2 * k - 1 - mid));
    }
}
int main() {
int t;
cin>>t;
while(t--){
long long k,x;
cin>>k>>x;
long long hi=2*k-1;
long long lo=1;
//cout<<1<<endl;
//cout<<(get(k) + get(k - 1) - get(2 * k - 1 - 1608737403))<<endl;

while(hi-lo>1){
    long long mid=(hi+lo)/2;
    long long emotes;
    emotes=f(k,mid);
    if(emotes<x){
      lo= mid+1;
    }
    else{
        hi=mid;
    }
  // /cout<<"emotes"<<emotes<<endl;
 //cout<<"mid"<<mid<<endl;
   // cout<<"hi"<<hi<<endl;
    //cout<<"lo"<<lo<<endl;
}
 
if(f(k,lo)>=x){
    cout<<lo<<endl;
    continue;
}
else if(f(k,hi)>=x){
    cout<<hi<<endl;
}
else{
    cout<<2*k-1<<endl;
}

}
return 0;
}