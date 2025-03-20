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
long long count=0;
long long ans=0;
long long f=0;
for (int i = n-1; i>=0; i--)
{
    while(s[i]=='1' && i>=0){
        count++;
        i--;
    }
    if(s[i]=='0'){
        f++;
    ans=ans+count;
    cout<<ans<<" ";
    }
}
if(f<n){
while(f!=n){
    f++;
    cout<<-1<<" ";
}
}
cout<<endl;


}
return 0;
}