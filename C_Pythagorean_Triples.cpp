#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n;
cin>>n;

if(n==1 || n==2){
    cout<<-1<<endl;
    return 0;
}
if(n%2==0){
    long long k=((n*n)/4)+1;
    long long m=k-2;
    cout<<m<<" "<<k<<endl;
}
else{
    long long m=((n*n)-1)/2;
    long long k=((n*n)+1)/2;
    cout<<m<<" "<<k<<endl;
}
return 0;
}