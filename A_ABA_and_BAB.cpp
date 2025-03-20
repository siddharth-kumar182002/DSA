#include <bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);

long long n;
cin>>n;
string s;
cin>>s;
long long i=1;

long long ans=1;

while(i<n){
    long long count1=0;
    long long count2=0;
    if(s[i-1]=='A'){
        count1++;
    }
    else{
        count2++;
    }
    while(i<n && s[i]!=s[i-1]){
        if(s[i]=='A'){
            count1++;
        }
        else{
            count2++;
        }
        i++;
    }
    
    long long x=max(count1,count2);
    //cout<<x<<endl;
    ans=((ans%mod)*(x%mod))%mod;
    i++;
}
cout<<ans<<endl;

return 0;
}