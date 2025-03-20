#include <bits/stdc++.h>
using namespace std;
int main() {
long long a,b,s;
cin>>a>>b>>s;

if((s-(abs(a)+abs(b)))%2==0 && s>=(abs(a)+abs(b))){
    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}


return 0;
}