#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
long long arr[n+1];
long long minx=100000000;
for (long long i = 1; i <=n; i++)
{
    cin>>arr[i];
    minx=min(arr[i],minx);
}
long long x=arr[1];

if(minx==x){
    cout<<"Bob"<<endl;
}
else{
    
    cout<<"Alice"<<endl;
    
}


}
return 0;
}