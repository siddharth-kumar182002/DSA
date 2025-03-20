#include <bits/stdc++.h>
using namespace std;
long long w,h,n;
bool f(long long x){
    return (x/w)*(x/h)>=n;

}
int main() {
cin>>w>>h>>n;

long long l=0;
long long r=1;
while(!f(r)){
    r=2*r;
}
long long mid;

while(r-l>1){
    mid=(l+r)/2;
    if(f(mid)){
        r=mid;
    }
    else{
        l=mid;
    }
}

cout<<r<<endl;


return 0;
}