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
if(n==1){
    cout<<-1<<endl;
}
else if(n==3){
    cout<<-1<<endl;
}
else{
    string ans="";
    if(n%2==0){
           for (int i = 1; i <=(n-2) ; i++)
           {
            ans+="3";
           }
           ans+="66";
           
    }
    else{
              for (int i = 1; i <=(n-4) ; i++)
           {
            ans+="3";
           }
           ans+="6366";
    }
    cout<<ans<<endl;
}
}
return 0;
}