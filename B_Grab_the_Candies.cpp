#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n];
int os=0;
int es=0;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    if(arr[i]%2==0){
        es=es+arr[i];
    }
    else{
        os=os+arr[i];
    }
}
//cout<<es<<endl;

if(es>os){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}



}
return 0;
}