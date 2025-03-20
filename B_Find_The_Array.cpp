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
vector<long long> arr(n);


for (int i = 0; i <n; i++)
{
    cin>>arr[i];
    if(arr[i] & (arr[i]-1)){
           long long x=log2(arr[i]);
           cout<<(1<<x)<<" ";
    }
    else{
        cout<<arr[i]<<" ";
    }
}
cout<<endl;





}
return 0;
}