#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n];
int sum=0;
for (int i = 0; i < n; i++)
{
     cin>>arr[i];
     sum=sum+arr[i];
}

if(sum==n){
    cout<<n-4<<endl;
}
else{
for (int i = 0; i < n-1; i++)
{
    if((arr[i]==-1) && (arr[i+1]==-1)){
        arr[i]=1;
        arr[i+1]=1;
         break;

    }

}
int x=0;
for (int i = 0; i < n; i++)
{
    x=x+arr[i];
}
cout<<x<<endl;


}


}
return 0;
}