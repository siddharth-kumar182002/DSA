#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long > arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
long long ans=0;
for (int i = n-1; i >=1; i--)
{
    if(arr[i]<arr[i-1]){
        ans=ans+arr[i-1]-arr[i];
    }
    
}
cout<<ans<<endl;

}
return 0;
}