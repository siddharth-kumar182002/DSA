#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,k,x;
cin>>n>>k>>x;
long long sum1=0;
long long sum2=0;

    sum1=((n*(n+1))/2)-(((n-k)*(n-k+1))/2);

 sum2=(k*(k+1))/2;

if(x<=sum1 && x>=sum2){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

}
return 0;
}