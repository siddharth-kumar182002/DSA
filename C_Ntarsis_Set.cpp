#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
vector<long long> arr(n);
for(int i=0; i<n ; i++){
      cin>>arr[i];
}
long long d = arr[n-1] + ( 2*arr[n-1]-n)*(k-1) ;

cout<<d<<endl;
}
return 0;
}