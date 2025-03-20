#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int arr[4];
for (int i = 0; i < 4; i++)
{
    cin>>arr[i];
}
int x=abs(arr[2]-arr[1]);
arr[2]=arr[2]-x;
arr[1]=arr[1]-x;
int k=min(arr[2],arr[1]);
if(arr[0]==0){
    cout<<1<<endl;
}
else{
if((arr[1]+arr[2]+arr[3])>arr[0]){
    cout<<2*k+2*arr[0]+1<<endl;
}
else if((arr[1]+arr[2]+arr[3])==arr[0]){
cout<<2*k+2*arr[0]<<endl;
}
else{
    cout<<2*k+arr[0]+(arr[1]+arr[2]+arr[3])<<endl;
}
}
}
return 0;
}