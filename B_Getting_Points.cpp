#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int tc;
cin>>tc;
while(tc--){
long long n,p,l,t;
cin>>n>>p>>l>>t;

long long tut=8;
long long point=0;
long long ans=0;
int f=0;

if(n<=7){
point=t+l;
ans++;
if(point>=p){
    f=1;
}
}
else{
 ans=((n-8)/14)+1;

long long lo=1;
long long hi=ans;
while(hi-lo>1){
    long long mid=(hi+lo)/2;


point=(mid*(2*t+l));
if(point>=p){
    hi=mid;
}
else{
    lo=mid+1;
}
}

if(lo*(2*t+l)>=p){
    ans=lo;
    point=(lo*(2*t+l));
    f=1;
}
else if (hi*(2*t+l)>=p){
ans=hi;
point=(hi*(2*t+l));
f=1;
}
else{
    point=(ans*(2*t+l));
}
//cout<<ans<<endl;

}

if(f==1){
   // cout<<ans<<endl;
    //cout<<"hi"<<endl;
    cout<<n-ans<<endl;
}
else{
//cout<<ans<<endl;
if(n-((ans-1)*14+8)>=7){
    ans++;
    point=point+l+t;
}
long long rem=p-point;
//cout<<"rem"<<rem<<endl;
long long d=rem/l;
if(rem%l!=0){
    d++;
}
ans=ans+d;
//cout<<"n="<<n<<endl;
//cout<<"ans="<<ans<<endl;
cout<<n-ans<<endl;

}


}
return 0;
}