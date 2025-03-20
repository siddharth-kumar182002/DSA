#include <bits/stdc++.h>
using namespace std;
int main() {
int t; cin>>t;
while(t--){
long long n;
cin>>n;
long long w=sqrt(n);
if((w*w)==n){
     cout<<w-1<<endl;
}else{
      cout<<w<<endl;
}
}


return 0;
}