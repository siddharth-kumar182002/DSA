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
for (int i = 1; i <=8 ; i++)
{
    if(i==s[1]-'0'){
        continue;
    }
    cout<<s[0]<<i<<endl;
}

for (int i = 0; i <=7; i++)
{
    char x='a'+i;
    if(s[0]==x){
        continue;
    }
    cout<<(x)<<s[1]<<endl;
}


}
return 0;
}