#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int count=0;
if(n<=9){
    cout<<n<<endl;
}
else{
    int count=0;
    while(n>10){
        //cout<<"n"<<n<<endl;
        n=n/10;
        count++;
    }
    cout<<9*(count)+n<<endl;

}
}
return 0;
}