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
string s,f;
cin>>s>>f;
long long a=0;
long long b=0;

for (int i = 0; i < n; i++)
{
    if(s[i]=='0' && f[i]=='1'){
        a++;
    }
    if(s[i]=='1' && f[i]=='0'){
        b++;
    }
}

long long mini=min(a,b);
long long maxi=max(a,b);
long long ans=mini+(maxi-mini);
cout<<ans<<endl;

}
return 0;
}