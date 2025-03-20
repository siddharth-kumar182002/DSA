#include <bits/stdc++.h>
using namespace std;
bool f(string s){
    for (int i = 1; i < s.size(); i++)
    {
        if(s[i]==s[i-1]){
            return false;
        }
    }
    return true;
    
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,m;
cin>>n>>m;
string s,t;
cin>>s>>t;

if(f(s)){
    cout<<"Yes"<<endl;
    continue;
}
if(t[0]!=t[m-1] || !f(t)){
    cout<<"No"<<endl;
    continue;
}
long long zz=0;
long long oo=0;
for (int i = 1; i < n; i++)
{
    if(s[i]==s[i-1]){
        if(s[i]=='0'){
            zz++;
        }
        else{
            oo++;
        }
    }
}

if(zz>0 && oo>0){
    cout<<"No"<<endl;
}
else{
    if(zz>0){
        if(t[0]=='0'){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }

    }
    else{
        if(t[0]=='0'){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }
}



}
return 0;
}