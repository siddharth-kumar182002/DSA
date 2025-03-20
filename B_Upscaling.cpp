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
for (int i = 0; i <2*n; i++)
{
    if(i%4==0 || i%4==1){
         for (int j = 0; j < 2*n ; j++)
         {
            if(j%4==0 || j%4==1){
                cout<<"#";
            }
            else{
                cout<<".";
            }
         }
         cout<<endl;
         
    }
    else{
        for (int j = 0; j < 2*n ; j++)
         {
            if(j%4==0 || j%4==1){
                cout<<".";
            }
            else{
                cout<<"#";
            }
         }
         cout<<endl;

    }
}

}
return 0;
}