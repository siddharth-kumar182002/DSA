#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n,m;
cin>>n>>m;
vector<string> s(n);
for (int i = 0; i <n; i++)
{
    cin>>s[i];
}
int f=0;
for (int i = 0; i < n; i++)
{
    for (int j = 0;j < m; j++)
    {
        //cout<<"i="<<i<<endl;
       // cout<<"j="<<j<<endl;
        long long count=0;
           if(s[i][j]=='1'){
            count++;
           }
           if( ((i+1)< n) && s[i+1][j]=='1'){
            count++;
           }
           if(((j+1)<m) && ((i+1)< n) && s[i+1][j+1]=='1' ){
            count++;
           }
           if( ((j+1)<m) &&  s[i][j+1]=='1'){
            count++;
           }
        
        if(count==3){
            f=1;
            cout<<"NO"<<endl;
            break;
        }
       // cout<<count<<endl;
       // cout<<"i="<<i<<endl;
    }
     if(f==1){
            break;
        }
    
}
if(f!=1){
    cout<<"YES"<<endl;
}


}
return 0;
}