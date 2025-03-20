#include <bits/stdc++.h>
using namespace std;
int main() {
string s;
cin>>s;

int l=s.length();

int f;

f=s[0]-'0';
if(f==9){
    s[0]='9';
}
else if(f>5){
    s[0]=(9-f)+'0';

}

for (int i = 1; i < l; i++)
{
    if((s[i]-'0')>5){
        s[i]=(9-(s[i]-'0')) + '0';
    }
}

cout<<s<<endl;

return 0;
}