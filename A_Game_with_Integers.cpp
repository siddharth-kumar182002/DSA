#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
long long a=n-1;
long long b=n+1;
if(a%3==0 || b%3==0){
    cout<<"First"<<endl;
}
else{
    cout<<"Second"<<endl;
}
}
return 0;
}