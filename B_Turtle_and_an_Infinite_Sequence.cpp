#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,m;
cin>>n>>m;
long long ans=n;
for (int i = 0; i <31; i++)
{
    long long x=n;
    long long y=n;
    long long diff=1e11;
    if((n&(1LL<<i))==0){
       // cout<<"i="<<i<<endl;
        for(int j=0;j<=i;j++){
            x=x|(1LL<<j);
        }
       //cout<<"x1="<<x<<endl;
        long long k=i+1;
        //cout<<"k1="<<k<<endl;
        while((x&(1LL<<k))==0){
          x=(x ^ (1LL << (k)));
          k++;
        }
        // cout<<"k2="<<k<<endl;
        //cout<<"x2="<<x<<endl;
        x=(x ^ (1LL << (k)));
        //cout<<x<<endl;
        for (int j = 0; j <i; j++)
        {
            y=(y & (~(1LL << (j))));
        }
        //cout<<y<<endl;
        if((n<(1<<i))){
            x=-11e11;
        }
       // cout<<x<<endl;
        y=y|(1LL<<i);
        
       
       //cout<<y<<endl;
       diff=min(diff,n-x);
       diff=min(diff,y-n);
      // cout<<"diff"<<diff<<endl;
       if(diff<=m){
        ans=ans|(1LL<<i);
       }
    }
   // cout<<"ans="<<ans<<endl;
    
}
cout<<ans<<endl;
}
return 0;
}