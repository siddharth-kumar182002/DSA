#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n];
cin>>arr[0];
cin>>arr[1];
int x=arr[0];
int y=arr[1];
for (int i = 2; i < n; i++)
{
    cin>>arr[i];
    if(i%2==0){
        x=__gcd(x,arr[i]);
}
    else{
        y=__gcd(y,arr[i]);
    }

}

cout<<"x="<<x<<endl;
cout<<"y="<<y<<endl;
int flag=0;
for (int i = 0; i < n-1; i++)
{
    if(__gcd(arr[i],arr[i+1])>1){
        flag=1;
        cout<<0<<endl;
        break;
    }
}
if(flag!=1){
    cout<<y<<endl;
}






}
return 0;
}