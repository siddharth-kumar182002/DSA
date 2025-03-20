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
string u,d;
cin>>u>>d;
long long ans=0;
for (int i = 0; i < n; i++)
{
    if(i+1<n && i-1>=0 && u[i]=='.' && u[i-1]=='.' && u[i+1]=='.' && d[i]=='.' && d[i-1]=='x' && d[i+1]=='x' ){
                     ans++;
    }
    if(i+1<n && i-1>=0 && d[i]=='.' && d[i-1]=='.' && d[i+1]=='.' && u[i]=='.' && u[i-1]=='x' && u[i+1]=='x' ){
                     ans++;
    }
}
cout<<ans<<endl;

}
return 0;
}