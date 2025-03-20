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
s[0]='(';

long long curr;
long long prv=0;
long long ans=0;
for (int i = 1; i < n; i++)
{
    if(s[i]==')'){
        ans=ans+i-prv;
        prv=i+1;
    }
    else if(s[i]!='_'){
        ans++;
    }
}
cout<<ans<<endl;

}
return 0;
}