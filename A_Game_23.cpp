#include <bits/stdc++.h>
using namespace std;
int main() {
int n,m;
cin>>n>>m;
int x;
int count=0;
if(n==m){
    cout<<"0"<<endl;
}
else if(m%n==0){
    x=m/n;
    while(x%2==0){
        x=x/2;
        count++;
}
    while(x%3==0){
    x=x/3;
    count++;
    }

    if(x!=1){
        cout<<"-1"<<endl;
    }
    else{
        cout<<count<<endl;
    }

}
else{
    cout<<"-1"<<endl;
}
return 0;
}