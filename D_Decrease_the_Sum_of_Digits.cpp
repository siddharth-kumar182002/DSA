#include <bits/stdc++.h>
using namespace std;

bool f(long long n,long long s){
    long long sum=0;
     while(n>=1){
        sum=sum+(n%10);
        n=n/10;
     }
     if(sum<=s){
        return 1;
     }
     else{
        return 0;
     }
    
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,s;
cin>>n>>s;
//0...9
long long x=1;
long long ans=0;
long long temp=n;

while(!f(temp,s)){
    //cout<<temp<<endl;
     long long lastdig=(temp/x)%10;
     long long add=(10-lastdig)*x;
     ans=ans+add;
      temp=temp+add;
      x=x*10;
}
cout<<ans<<endl;
}
return 0;
}