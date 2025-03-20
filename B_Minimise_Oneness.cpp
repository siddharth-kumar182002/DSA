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
string ans="";
for (int i = 0; i < n; i++)
{
    if(i==1){
        ans+='1';
    }
    else{
        ans+='0';
    }
}
cout<<ans<<endl;

}
return 0;
}