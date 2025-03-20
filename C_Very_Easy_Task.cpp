#include <bits/stdc++.h>
using namespace std;
long long n,x,y;


bool f(long long k){
    if(k<min(x,y)){
        return false;
    }
    k=k-min(x,y);

    return ((k/x)+(k/y))>=(n-1);
}
int main() {


cin>>n>>x>>y;


long long l=0;
long long r=max(x,y)*n;

long long mid;
//cout<<f(1)<<endl;

while(r-l>1){
mid=l+(r-l)/2;
    if(f(mid)){
        r=mid;
    }
    else{
    l=mid;
    }
    //cout<<"l="<<l<<" "<<"r="<<r<<endl;
    //cout<<"mid="<<mid<<"f"<<f(mid)<<endl;
}


cout<<r;

return 0;
}