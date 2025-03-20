#include <bits/stdc++.h>
using namespace std;

long long f(long long l,long long r,string &s,char x){
//cout<<"l="<<l<<"r="<<r<<endl;
if(l==r){
if(s[l-1]==x){
    return 0;
}
else{
    return 1;
}
}
// if(dp[l][r]!=1e9){
//     return dp[l][r];
// }

long long mid=(l+r)/2;
long long count=0;
long long tot=0;
for (int i = l; i <=r; i++)
{
    if(i<=mid && s[i-1]==x ){
        count++;
    }
    if(s[i-1]==x){
        tot++;
    }
}

//cout<<"count"<<count<<endl;
//cout<<"tot"<<tot<<endl;
long long left=(mid-l+1-count)+f(mid+1,r,s,x+1);
long long right=f(l,mid,s,x+1)+(mid-l+1-tot+count);

return min(left,right);


}
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
long long l=1;
long long r=n;

char x='a';
long long ans=f(l,r,s,x);

cout<<ans<<endl;
}
return 0;
}