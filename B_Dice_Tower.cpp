#include <bits/stdc++.h>
using namespace std;
int main() {
long long n;
cin>>n;

while(n--){
    long long temp;
    cin>>temp;
if(temp>14 && temp%14!=0){
    if(temp%14>6){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
else{
    cout<<"NO"<<endl;
}
}
return 0;
}