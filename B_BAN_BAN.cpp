#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
long long i=1;
if(n%2==0){
    long long x=n/2;
    long long y=n;
    cout<<n/2<<endl;
    while(x--){
        cout<<3*i-1<<" "<<3*y<<endl;
        i++;
        y--;
    }
    
}
else{
    long long x=n/2+1;
    
long long z=x;
long long y=n;
    cout<<n/2+1<<endl;

    if(x==1){
        cout<<1<<" "<<2<<endl;
    }
    else{
    while(z--){
        if(y!=x){
             cout<<3*i-1<<" "<<3*y<<endl;
               i++;
                  y--;
        }
        else{
            cout<<(3*x)-1<<" "<<3*n-2<<endl;
        }
    }}
}
}
return 0;
}