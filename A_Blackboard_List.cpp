#include <bits/stdc++.h>
using namespace std;
int main() {
long long  t;
cin>>t;
while(t--){
long long n;
cin>>n;
long long arr[n];
int f=0;
for (long long i = 0; i <n; i++)
{
    cin>>arr[i];
    if(arr[i]<0){
        f=1;
    }
}

sort(arr,arr+n);
if(f==1){
    cout<<arr[0]<<endl;
}
else{
    cout<<arr[n-1]<<endl;
}



}
return 0;
}