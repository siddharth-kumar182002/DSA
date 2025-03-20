#include <bits/stdc++.h>
using namespace std;
int main() {
long long n,m,s;
cin>>n>>m>>s;

long long a=n/s;
long long b=m/s;
if(n%s==0 && m%s==0){
cout<<a*b;
}

if(n%s==0 && m%s!=0){
    cout<<a*b+a;
}
if(n%s!=0 && m%s==0){
    cout<<a*b+b;
}

if(n%s!=0 && m%s!=0){
    cout<<a*b+a+b+1;
}
    return 0;
}