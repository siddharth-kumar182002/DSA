#include <bits/stdc++.h>
using namespace std;
int main() {
long long t;
cin>>t;
while(t--){
long long arr[4];
long long even=0;
long long odd=0;
long long sum=0;
for (int i = 0; i < 4; i++)
{
    cin>>arr[i];
    sum=sum+arr[i];
    if(arr[i]%2==0){
        even++;
    }
    else{
        odd++;
    }
}

if(sum%2==0){
    if(even==4 || even==0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
else{
    if((arr[0]==0 || arr[1]==0 || arr[2]==0) && even<=1){
cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;    }
}

}
return 0;
}