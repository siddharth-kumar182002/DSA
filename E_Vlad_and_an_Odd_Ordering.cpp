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
//1
//2
//3
//1 3 5 7 
//2 6 
//4
long long x;

if(n%2==0){
    x=n/2;

}
else{
    x=(n+1)/2;
   
}

if(k<=x){
    cout<<(2*k-1)<<endl;

}
else{
    k=k-x;
    long long l=2;
    while(k>0){
       // cout<<k<<endl;
     long long turn=((n)/l);
     long long ind=(turn+1)/2;
    // cout<<"turn"<<ind<<endl;
     if(k<=ind){
        cout<<l*(2*k-1)<<endl;
        k=0;
     }
     else{
          k=k-ind;
     }
     l=l<<1;
    }
}

}
return 0;
}