#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int> v(n);
int xo=0;
for(auto &x:v){
    cin>>x;
    xo=xo^x;

}
sort(v.begin(),v.end());
if(xo==0){
    cout<<0<<endl;
}
else{
if((n%2==0)){
    cout<<-1<<endl;
}
else{
        cout<<xo<<endl;
    
}
}

}
return 0;
}