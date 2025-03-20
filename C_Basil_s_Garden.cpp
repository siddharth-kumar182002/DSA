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
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
long long maxi=arr[n-1];
for (int i = n-2; i >=0; i--)
{
    if(arr[i]>maxi){
            maxi=arr[i];
    }
    else{
        if((arr[i]-maxi)>arr[i+1]){
              continue;
         }
        else{
         maxi=maxi+1;
        }
    }
}
cout<<maxi<<endl;
}
return 0;
}