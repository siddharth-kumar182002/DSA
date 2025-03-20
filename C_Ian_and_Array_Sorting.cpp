#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
if(n%2!=0){
    cout<<"YES"<<endl;
}
else{
for (int i = 0; i < n-2; i++)
{
    if(arr[i]>arr[i+1]){
        long long d=arr[i]-arr[i+1];
        arr[i+1]=arr[i+1]+d;
        arr[i+2]=arr[i+2]+d;
}
else{
     long long d=arr[i+1]-arr[i];
 arr[i+1]=arr[i+1]-d;
 arr[i+2]=arr[i+2]-d;
}

}

/*if(arr[n-2]<arr[n-1]){
     long long d=arr[n-3]-arr[n-2];
 arr[n-1]=arr[n-1]+d;
 arr[n-2]=arr[n-2]+d;
}*/

for(auto &x:arr){
    cout<<x<<" ";
}
cout<<endl;

if(arr[n-1]>=arr[n-2]){
    cout<<"YES"<<endl;
}
else{
    
        cout<<"NO"<<endl;

}

}
}
return 0;
}