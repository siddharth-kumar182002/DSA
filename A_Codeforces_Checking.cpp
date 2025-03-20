#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
char c;
cin>>c;
string s="codeforces";
int flag=0;
for (int i = 0; i < s.size(); i++)
{
    if(s[i]==c){
        cout<<"YES"<<endl;
        flag=1;
        break;
    }
    else{
        continue;
    }
}
if(flag!=1){
    cout<<"NO"<<endl;
}

}
return 0;
}