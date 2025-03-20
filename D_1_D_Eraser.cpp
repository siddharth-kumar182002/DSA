#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
string s;
cin>>s;
long long ans=count(s.begin(),s.end(),'B');
long long len;
//cout<<"out"<<ans<<endl;
for (int i = 0; i < n; )
{
    if(s[i]=='B'){
        long long count=0;
        len=1;
          while(len<=k && i<n){
            if(s[i]=='B'){
                count++;
            }
            i++;
            len++;
          }
          ans=ans-(count)+1;
          //cout<<ans<<endl;
    }
    else{
        i++;
    }


}
cout<<ans<<endl;
}
return 0;
}