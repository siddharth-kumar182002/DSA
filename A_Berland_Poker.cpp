#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
double  n,m,k;
cin>>n>>m>>k;
double x=n/k;

if(x>=m){
    cout<<m<<endl;
}
else{
  cout<<x-ceil((m-x)/(k-1))<<endl;
  //cout<<"x="<<x<<endl;
  //cout<<"c="<<ceil((m-x)/(k-1))<<endl;
}

}
return 0;
}