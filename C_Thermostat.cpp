#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long l,r,x;
long long a,b;
cin>>l>>r>>x;
cin>>a>>b;
if(abs(a-b)>=x){
    cout<<1<<endl;
    
}
else{
    if((b+x)>r && (b-x)<l){
          if(a==b){
      cout<<0<<endl;
  }
  else{
        cout<<-1<<endl;
  }
    }
    else if((b+x)<=r && (b-x)>=l){
        if(a==b){
            cout<<0<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    else if((b+x)>r && (b-x)>=l){
         if(a==b){
                cout<<0<<endl;
       }
       else{
           if(a>b || l+x<=a){
            cout<<2<<endl;
           }
           else{
            if(a+x<=r){
            cout<<3<<endl;
            }
            else{
                cout<<-1<<endl;
            }
           }
       }

    }
    else{

            if(a==b){
           cout<<0<<endl;
            }
  else{
      if(a<b || a+x<=r ){
        cout<<2<<endl;
      }
      else{
        if(a-x>=l){
            cout<<3<<endl;
        }
        else{
            cout<<-1<<endl;
        }
       
      }
  }

    }
}
}
return 0;
}