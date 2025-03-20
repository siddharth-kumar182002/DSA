#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
long long sum=0;
while(n>0){
    sum=sum+n%10;
    n=n/10;
}
cout<<sum<<endl;
}
return 0;
}