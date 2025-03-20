#include<iostream>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){

    int n,k,b,s ;
    cin>>n>>k>>b>>s;

    if((s-k*b)<((k-1)*(n-1)+k*b)){

        cout<<-1<<endl;
    }
    else{

        cout<<0<<endl;
    }




}
return 0;
}