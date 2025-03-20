#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n;
cin>>n;
string s;
cin>>s;
int  size=s.size();
int flag=0;
if(size<=3){
    cout<<"NO"<<endl;
}
else{
for (int i = 2; i <(s.size()-1); i++)
{
    for (int j = 0; j < (i-1) ; j++)
    {
        if(s[i]==s[j] && s[i+1]==s[j+1]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        break;
    }
    
    
}
if(flag==1){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

    
}
}
return 0;
}