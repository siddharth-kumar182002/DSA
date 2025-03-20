#include <bits/stdc++.h>
using namespace std;

const long long mod=1e9+7;
long long f(vector<long long> &arr , long long size)
{
    long long max_so_far = -1e16, max_ending_here = 0;

    for (int i = 0; i < size; i++) {
        max_ending_here = max_ending_here + arr[i];
       // cout<<max_ending_here<<endl;
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}
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
long long sum=0;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    sum=(sum+arr[i])%mod;
}

long long maxi=(f(arr,n))%mod;
sum=(sum+mod)%mod;
//cout<<maxi<<endl;
if(maxi<=0){
    cout<<((sum+mod)%mod)<<endl;
}
else{
    
for (int i = 0; i < k; i++)
{
    sum=(sum%mod+maxi%mod)%mod;
    maxi=((maxi%mod)+(maxi%mod))%mod;
}

cout<<sum<<endl;


}



}
return 0;
}