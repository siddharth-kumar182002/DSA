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
string r;
cin>>r;
long long count0=0;
long long count1=0;
for (int i = 0; i <n; i++)
{
    if(s[i]=='0'){
        count0++;
    }
    else{
        count1++;
    }
}
// long long f=0;
//cout<<count1<<" "<<count0<<endl;
for (int i = 0; i <(n-1); i++)
{
    if(r[i]=='0' && count0>0){
         count1--;
    }
    if(r[i]=='1' && count1>0){
         count0--;
    }
    if((count1<=0 ) || (count1<=0)){
        break;
    }
}
//cout<<count1<<" "<<count0<<endl;
    if(count1>1 || count0>1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }



}
return 0;
}