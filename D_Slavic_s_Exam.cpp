#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int q;
cin>>q;
while(q--){
string s,t;
cin>>s>>t;

long long l=0;
long long n=s.size();
long long m=t.size();
for (int i = 0; i <n; i++)
{
    if(l==m){
        break;
    }

    if(s[i]==t[l]){
        l++;
        continue;
    }
    if(s[i]=='?'){
        s[i]=t[l];
        l++;
    }
    
}

if(l<m){
    cout<<"NO"<<endl;
}
else{
    for (int i = 0; i <n; i++)
    {
        if(s[i]=='?'){
            s[i]='z';
        }
    }
    cout<<"YES"<<endl;
    cout<<s<<endl;
}

}
return 0;
}