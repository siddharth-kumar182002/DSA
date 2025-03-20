#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
long long temp=1<<0;
for (int i = 0; i <31 ; i++)
{
    temp=1<<i;
    if(temp<=k){
        continue;
    }
    else{
        break;
    }
}

cout<<temp<<endl;

}
return 0;
}