#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;

if(n<k){
cout<<"NO"<<endl;
continue;
}
if(n%2==1 && k%2==0){
    cout<<"NO"<<endl;
    continue;
}


if(n%2==1){
    //kodd
    cout<<"YES"<<endl;
    for (int i = 0; i < k-1; i++)
    {
        cout<<1<<" ";
    }
    cout<<n-(k-1)<<endl;
    
}
else{
//n even;
if(k%2==0){
cout<<"YES"<<endl;
for (int i = 0; i < k-1; i++)
    {
        cout<<1<<" ";
    }
    cout<<n-(k-1)<<endl;
}
else{
//k odd;

if(n-(2*(k-1))<=0){
    cout<<"NO"<<endl;
    continue;
}
cout<<"YES"<<endl;
for (int i = 0; i < k-1; i++)
{
    cout<<2<<" ";
}
cout<<n-(2*(k-1))<<endl;


}







}



}
return 0;
}