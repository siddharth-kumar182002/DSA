#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){

long long n,k;
cin>>n>>k;

//1 2 3 5 6 7 9 10 11 13 14 15 
//0....1n......2n......
long long x=k/(n-1);
long long y=k%(n-1);
if(y==0){
    x--;
    y=n-1;
}

cout<<n*x+y<<endl;
}
return 0;
}