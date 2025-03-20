#include <bits/stdc++.h>
using namespace std;

bool f(double w,long long  m1,long long  m2,long long  a1,long long  a2,long long  b1,long long  b2){

if(a1*a1+a2*a2<=w*w){
    if((m1-a1)*(m1-a1)+(m2-a2)*(m2-a2)<=w){
        return  true;
    }
    else{
        
    }
}
if(b1*b1+b2*b2<=w*w){
    if((m1-b1)*(m1-b1)+(m2-b2)*(m2-b2)<=w){
        return  true;
    }
}


}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long m1,m2;
long long a1,a2;
long long b1,b2;
cin>>m1>>m2>>a1>>a2>>b1>>b2;
double lo=0;
double hi=1e6;
//ffffttttttt
cout<<f(4.0,m1,m2,a1,a2,b1,b2)<<endl;
while(hi-lo>(1e-7)){
    double mid=(hi+lo)/2.0;

if(f(mid,m1,m2,a1,a2,b1,b2)){
hi=mid;
}
else{
lo=mid+1e-7;
}
}

if(f(lo,m1,m2,a1,a2,b1,b2)){
    cout<<lo<<endl;
}
else{
    cout<<hi<<endl;
}

}
return 0;
}