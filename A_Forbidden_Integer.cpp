#include <bits/stdc++.h>
using namespace std;
int main() {
long long q;
cin>>q;
while(q--){
long long n,k,x;
cin>>n>>k>>x;
if(x==1){
    if((k<=2 && (n%2)!=0) || k==1){
        cout<<"NO"<<endl;
    }
    else{
        
        cout<<"YES"<<endl;
        if((n%2)==0){
            cout<<n/2<<endl;
            long long t=n/2;
            while((t)--){
              cout<<2<<" ";  
            }
            cout<<endl;
            }
            else{
                long long t=n/2;
                t--;
                cout<<t+1<<endl;
                while(t--){
                    cout<<2<<" ";
                }
                cout<<3<<endl;
            }
    }
}
else{
    cout<<"YES"<<endl;
    cout<<n<<endl;
    while(n--){
        cout<<1<<" ";
    }
    cout<<endl;
}
}
return 0;
}