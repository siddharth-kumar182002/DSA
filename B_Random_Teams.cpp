#include <bits/stdc++.h>
using namespace std;
long long f(long long n){
    return (n*(n-1))/2;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,m;
cin>>n>>m;
long long maxi=f(n-m+1);
long long x=n%m;
long long y=n/m;
long long mini=x*(f(y+1))+(m-x)*(f(y));
cout<<mini<<" "<<maxi<<endl;
return 0;
}