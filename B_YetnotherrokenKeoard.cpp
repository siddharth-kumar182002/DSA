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
vector<long long> sm;
vector<long long > bg;

for (int i = 0; i < s.size(); i++)
{
    if(s[i]=='b'){
        if(sm.size()>0){
            s[(*sm.rbegin())]='*';
               sm.pop_back();
        }
        s[i]='*';
        continue;
    }
    if(s[i]=='B'){
         if(bg.size()>0){
            s[(*bg.rbegin())]='*';
               bg.pop_back();
        }
        s[i]='*';
        continue;
    }

    if(s[i]>='a'){
        sm.push_back(i);
    }
    else{
        bg.push_back(i);
    }
}
for (int i = 0; i < s.size(); i++)
{
    if(s[i]!='*'){
        cout<<s[i];
    }
}
cout<<endl;


}
return 0;
}