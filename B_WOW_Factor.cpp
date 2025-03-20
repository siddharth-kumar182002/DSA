#include <bits/stdc++.h>
using namespace std;
int main() {
string s;
cin>>s;
int n=s.size();
vector<int> lf(n,0);
vector<int> rr(n,0);

for (int i = 1; i < s.size(); i++)
{

    if(s[i]=='v' && s[i-1]=='v' ){
        lf[i]=lf[i-1]+1;;
    }
    else{
        lf[i]=lf[i-1];
    }
}
/*for(auto it:lf){
    cout<<it<<" ";
}
cout<<endl;*/

for (int i = n-2; i >=0; i--)
{

    if(s[i]=='v' && s[i+1]=='v'){
        rr[i]=rr[i+1]+1;;
    }
    else{
        rr[i]=rr[i+1];
    }
}
/*for(auto it:rr){
    cout<<it<<" ";
}
cout<<endl;*/
long long ans=0;
for (int i = 0; i < n; i++)
{
    if( s[i]=='o'){
         ans=ans+((lf[i])*1LL*(rr[i]));
    }
}
cout<<ans<<endl;

return 0;
}