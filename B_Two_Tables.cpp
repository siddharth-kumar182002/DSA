#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long W,H;
cin>>W>>H;
long long x1,y1,x2,y2;
cin>>x1>>y1>>x2>>y2;
long long w,h;
cin>>w>>h;


long long ans=0;

long long rw=max(x1,W-x2);
long long rh=max(y1,H-y2);
//hw
long long s1=0;
long long s2=0;
if(h>H || w>W){
    cout<<-1<<endl;
    continue;
}

if(rh>=h || rw>=w){
   cout<<fixed<<double(0)<<setprecision(9)<<endl;
}
else{
     long long s1=0;
     long long s2=0;

     s1=h-rh;

      if(y1==rh){
        if(y2+s1>H){
            s1=0;
        }
     }
     else{
          if(y1-s1<0){
            s1=0;
          }
     }
     s2=w-rw;
     if(x1==rw){
        if(x2+s2>W){
            s2=0;
        }
     }
     else{
          if(x1-s2<0){
            s2=0;
          }
     }
    // cout<<"rh="<<rh<<endl;
    // cout<<"rw="<<rw<<endl;
     //cout<<"s1="<<s1<<endl;
     //cout<<"s2="<<s2<<endl;
     
     if(s1==0 && s2==0){
     cout<<-1<<endl;
     }
     else if (s1>0 && s2>0){
        cout<<fixed<<double(min(s1,s2))<<setprecision(9)<<endl;
     }
     else{
         cout<<fixed<<double(max(s1,s2))<<setprecision(9)<<endl;
     }
     
}


}
return 0;
}