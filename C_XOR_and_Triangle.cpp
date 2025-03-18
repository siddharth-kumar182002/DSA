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

if((n&(n-1))==0 || (n&(n+1))==0 ){
    cout<<-1<<endl;
}
else{
    long long count=0;
    for(int i=31;i>=0;i--){
       
        if((n&(1<<i))){
          //  cout<<"i="<<i<<endl;
            count++;
            if(count==1){
                n=n^(1<<i);
            }
        }
        else{
            if(count>=1){
                n=n^(1<<i);
                break;
            }
        }
    }
    cout<<n<<endl;
}

}
return 0;
}