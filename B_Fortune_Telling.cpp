#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n,x,y;
cin>>n>>x>>y;
long long hui=x;
for (int i = 0; i < n; i++)
{
    long long temp;
    cin>>temp;
    hui=hui^temp;
}
if((hui&1)==(y&1)){
    cout<<"Alice"<<endl;
}
else{
    cout<<"Bob"<<endl;
}

}
return 0;
}