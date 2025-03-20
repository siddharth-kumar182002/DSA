#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
 long long l=1;
   long long r=n;
   long long f=0;
    while (l<=r){
        long long m=(l+r)/2;//2
        long long b=m^(2*n-m);
        if (b>n){
            r=m-1;
        }
        else if (b<n){
            l=m+1;
        }
        else{
            cout<<m<<" "<<2*n-m<<endl;
            f=1;
            break;
        }
}
if(f!=1){
cout<<-1<<endl;
}


}
return 0;
}