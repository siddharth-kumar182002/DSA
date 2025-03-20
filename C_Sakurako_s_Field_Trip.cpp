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
}
long long mid=(n+1)/2;

for (int i =1; i<mid; i++)
{
           if(arr[i]==arr[i-1] || arr[n-i-1]==arr[n-i]){
            swap(arr[i],arr[(n-i-1)]);
           }
}
long long ans=0;
for (int i = 0; i <(n-1); i++)
{
    if(arr[i]==arr[i+1]){
        ans++;
    }
}
cout<<ans<<endl;



}
return 0;
}