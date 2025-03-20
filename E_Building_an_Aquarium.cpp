#include <bits/stdc++.h>
using namespace std;

bool f(long long hit,vector<long long> &arr,long long x){

long long w=0;
for (int i = 0; i < arr.size(); i++)
{
    if(hit>=arr[i]){
        w=w+(hit-arr[i]);
    }
}
//cout<<w<<endl;
if(w>x){
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
long long n,x;
cin>>n>>x;
vector<long long> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
long long lo=1;
long long hi=1e10;
//ttttfffff
//cout<<f(4,arr,x)<<endl;
while(hi-lo>1){
    long long mid=(hi+lo)/2;
    //cout<<mid<<endl;
   if(!(f(mid,arr,x))){
         hi=mid;
   }
   else{
       lo=mid;
   } 
}
if((f(lo,arr,x))){
    cout<<lo<<endl;
}
else{
    cout<<hi<<endl;
}

}
return 0;
}