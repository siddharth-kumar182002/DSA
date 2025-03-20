#include <bits/stdc++.h>
using namespace std;
int main() {
int k,r;
cin>>k>>r;
int i=1;
int ans=0;
while(true){

ans=k*i;
    if(ans%10==0 || ans%10==r){
        break;
    }
//cout<<"k="<<k<<endl;
//cout<<"i="<<i<<endl;
    ans=k*i;
    i++;
}

cout<<i<<endl;
return 0;
}