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
int ans=n-1;

for (int i = 0; i < n-2; i++)
{
    if(s[i]==s[i+2]){
        ans--;
    }

}
cout<<ans<<endl;

}
return 0;
}