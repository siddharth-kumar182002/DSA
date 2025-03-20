#include <bits/stdc++.h>
using namespace std;
int main() {
long long n;
cin>>n;
if(n==1){
    cout<<4<<endl;
    return 0;
}

if(n%2==0){
    long long x=(n/2)+1;
    cout<<x*x<<endl;
}
else{
    long long x=(n+1)/2+1;
    cout<<2*(x-1)*(x)<<endl;;
}
return 0;
}