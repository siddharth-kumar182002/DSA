#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
vector<long long> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
// if(n==1){
//     cout<<arr[0]<<endl;

// }
sort(arr.begin(),arr.end());
long long maxi=arr[n-1];
long long end=(arr[n-1]+k-1);

for (int i = n-2; i >=0; i--)
{
    long long x=(end-arr[i])/k;
   // cout<<x<<" ";
    if(x%2==0){
        //off....onn
       maxi=max(maxi,(arr[i]+(x*k)));
       //cout<<"X="<<x<<" "<<(arr[i]+x*k)<<endl;
    }
  
}
//cout<<endl;
long long f=0;
for (int i = 0; i <=n-2; i++)
{
    long long x=(end-arr[i])/k;
    if(x%2!=0){
        long long p=(arr[i]+x*k-1);
       // cout<<p<<endl;
        if(p<maxi){
            f=1;
            break;
        }
    }
}
if(f==1){
    cout<<-1<<endl;
}
else{
    cout<<maxi<<endl;
}

}
return 0;
}