#include <bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long x,y;

cin>>x>>y;

long long q=y/x;
long long r=y%x;

    cout<<((q+1)*(q+1))*r+((q*q)*(x-r))<<endl;

}
return 0;
}