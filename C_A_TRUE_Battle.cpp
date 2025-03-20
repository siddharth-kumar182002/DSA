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
string s;
cin>>s;
if(s[0]=='1'){
    cout<<"YES"<<endl;
}
else if(s[n-1]=='1'){
cout<<"YES"<<endl;
}
else{


long long f=0;
for (int i = 1; i < n; i++)
{
    if(s[i]=='1' && s[i-1]=='1'){
        f=1;
        break;
    }
}

if(f==1){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}





}
}
return 0;
}