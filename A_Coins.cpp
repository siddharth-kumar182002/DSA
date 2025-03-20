#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;

if(n%2==0){
    cout<<"YES"<<endl;
}
else{
    if(n<k || k%2==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}

}
return 0;
}