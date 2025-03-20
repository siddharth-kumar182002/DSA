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
string d="1234567890";

long long ans=0;

long long ind=0;
long long i=0;
while(i<=3){

    if(s[i]!='0'){
        if((s[i]-'0')>(d[ind]-'0') && ind<10){
        while((s[i]-'0')>(d[ind]-'0')){
               ind++;
               ans++;
        }
        }
        else{
            while((s[i]-'0')<(d[ind]-'0') && ind<10){
                ind--;
                ans++;
            }
        }
    }
    else{ 
         while((d[ind])!='0' && ind<10){
            ind++;
            ans++;
         }
    }
    if(s[i]==d[ind]){
       ans++;
       if(s[i]=='0' && i!=3 && s[i+1]!='0'){
        ind--;
        ans++;
       }
       i++;
       
       continue;
    }
}

cout<<ans<<endl;

}
return 0;
}