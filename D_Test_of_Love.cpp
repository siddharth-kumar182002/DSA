#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,m,k;
cin>>n>>m>>k;
string s;
cin>>s;
s='L'+s+'L';
//cout<<s<<endl;
long long j=0;//man
long long f=0;
int x=10;
n=n+1;
long long swim=k;
while(j<n)
{
    
    long long croc=-1;
    long long  log=-1;
    for (int k = j+1; k <=n ; k++)
    {
        if(s[k]=='C'){
            croc=k;
        }
        if(s[k]=='L'){
            log=k;
            break;
        }
    }
    //cout<<j<<" "<<log<<endl;
    if((log-j)<=m){
           j=log;
           continue;
    }
    else{
        if(croc<(j+m) && ((swim-(log-j-m))>=0)){
               swim-=(log-j-m);
                j=log;
               // cout<<"swim"<<swim<<endl;
               continue;
        }
        else{
            f=1;
            cout<<"NO"<<endl;
            break;
        }
    }
    
}

if(f==0){
    cout<<"YES"<<endl;
}


}
return 0;
}