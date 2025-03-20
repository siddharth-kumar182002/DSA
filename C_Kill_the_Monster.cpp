#include <bits/stdc++.h>
using namespace std;
long long ub(long long a,long long b){
    long long temp;
    if((a%b)==0){
        temp=a/b;
        return temp;
    }
    else{
        temp=((a/b)+1);
        return temp;
    }
}
int main() {
int t;
cin>>t;
while(t--){
long long hc,dc;
cin>>hc>>dc;
long long hm,dm;
cin>>hm>>dm;
long long k,w,a;
cin>>k>>w>>a;
long long wi=ub(hm,dc);
long long mi=ub(hc,dm);
int flag=0;
//cout<<wi<<" "<<mi<<endl;
if(wi<=mi){
    cout<<"YES"<<endl;
    flag=1;
}
else{
    for (int i = 0; i <=k; i++)
    {
        long long t1=hc;
        long long t2=dc;
        t1=t1+i*a;
        t2=t2+(k-i)*w;
         long long c1=ub(hm,t2);
         long long c2=ub(t1,dm);
        // cout<<c1<<" "<<c2<<endl;
         if(c1<=c2){
            cout<<"YES"<<endl;
            flag=1;
            break;
           }
         

    }
    
}
if(flag!=1){
    cout<<"NO"<<endl;
}


}
return 0;
}