#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n;
cin>>n;
//2 3 2*2 5 2*3 7 2*4 3*3 2*5 
//2 3 5 7
//2
//2 3  //2 3 5   //2 3 5 7
//2 5  //2 5 7
//2 7  //2 3 7
//
long long ans=0;


ans=(n/2)+(n/3)+(n/5)+(n/7)-(n/(2*3))-(n/(2*5))-(n/(2*7))-(n/(3*5))-(n/(3*7))-(n/(5*7))+(n/(2*3*5))+(n/(2*3*7))+(n/(3*5*7))+(n/(2*5*7))-(n/(2*3*5*7));
cout<<(n-ans)<<endl;
return 0;
}