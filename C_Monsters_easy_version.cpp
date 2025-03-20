#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
long long arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];

}
sort(arr,arr+n);
long long x=1;
long long ans=0;
for (int i = 0; i < n; i++)
{
    if(arr[i]>x){
        ans=ans+(arr[i]-x);
         x++;
    }
    else if(arr[i]==x){
        x++;
       continue;
        
    }
    else{
        continue;
    }
}
cout<<ans<<endl;
}
return 0;
}