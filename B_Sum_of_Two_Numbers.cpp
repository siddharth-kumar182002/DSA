#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;

long long  x=0;
long long y=0; 
long long m=1;
int up=0;
while(n){
    int temp=n%10;
    n=n/10;
    if(temp%2==0){
        x=x+(m*(temp/2));
        y=y+(m*(temp/2));

    }
    else{
        if(up==0){
        x=x+(m*(temp/2));
        y=y+(m*(temp/2+1));
        up=1;
        }
        else{
             x=x+(m*(temp/2+1));
             y=y+(m*(temp/2));
             up=0;
        }
    }
    m=m*10;
    }
cout<<x<<" "<<y<<endl;

}
return 0;
}