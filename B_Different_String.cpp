#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
string s;
cin>>s;

long long f=0;
for (int i = 1; i < s.size(); i++)
{
    if(s[i]!=s[0]){
        f=1;
        swap(s[i],s[0]);
        break;
    }
}
if(f==1){
    cout<<"YES"<<endl;
    cout<<s<<endl;
}
else{
    cout<<"NO"<<endl;
}

}
return 0;
}