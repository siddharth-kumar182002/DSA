#include <bits/stdc++.h>
using namespace std;

bool f(long long x,vector<long long > &arr,vector<long long > &t){
int f=0;
for (int i = 0; i < arr.size(); i++)
{
    long long l=arr[i]-x;
    long long r=arr[i]+x;
    long long ind=(lower_bound(t.begin(),t.end(),l)-t.begin());
    if(ind>=t.size()){
        f=1;
        break;
    }
    long long y = t[ind];
    cout<<"ind"<<ind<<endl;
    cout<<"l="<<l<<endl;
    cout<<"r="<<r<<endl;
    cout<<"y="<<y<<endl;
          if(y>r){
                f=1;
           break;
       }
}
      if(f!=1){
        return true;
      }
      else{
        return false;
      }

}
int main() {
long long n,m;
cin>>n>>m;
vector<long long > arr(n);
vector<long long > t(m);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
for (int i = 0; i <m; i++)
{
    cin>>t[i];
}
cout<<f(1,arr,t)<<endl;
//ffffttttt
/*
long long lo=0;
long long hi=1e9;
long long mid;
while(hi-lo>1){
mid=(hi+lo)/2;

if(f(mid,arr,t)){
hi=mid;
}
else{
lo=mid+1;
}
}

if(f(lo,arr,t)){
    cout<<lo<<endl;
}
else{
    cout<<hi<<endl;
}*/


return 0; 
}