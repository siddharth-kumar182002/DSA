#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n;
cin>>n;
long long arr[n];
long long count=0;
long long sum=0;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    if(arr[i]<0){
        count++;
        arr[i]=abs(arr[i]);
    }
sum=sum+arr[i];

}

sort(arr,arr+n);
if(count&1){
    cout<<sum-2*arr[0]<<endl;;
}
else{
    cout<<sum<<endl;
}

}
return 0;
}