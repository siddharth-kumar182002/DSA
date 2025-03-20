#include <bits/stdc++.h>
using namespace std;

int func(int n,int a,int b,int c){

if(n==2){
    return 3;
}
int x=func( n-1,a, c, b);

int z=func( n-1,b, a, c);

int res=x+z;

return res+1;
}
int main() {
cout<<func(4,1,1,1)<<endl;
return 0;
}