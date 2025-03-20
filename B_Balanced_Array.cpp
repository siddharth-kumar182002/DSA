#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int x=n/2;
int ans=0;
int ans1=0;

 if(x%2==0){
    cout<<"YES"<<endl;
      for (int i = 1; i <=x; i++)
      {
        cout<<2*i<<" ";
        ans=ans+2*i;
      }
      for (int i = 1; i <=(x-1); i++)
      {
           cout<<2*i-1<<" ";
           ans1=ans1+(2*i-1);
      }
      cout<<ans-ans1<<endl;
      
      
 }
 else{
    cout<<"NO"<<endl;
 }

}
return 0;
}