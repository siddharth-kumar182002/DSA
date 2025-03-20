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
vector<long long> brr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    if(i>0){
    arr[i]=arr[i]+arr[i-1];
    }
}
for (int i = 0; i < n; i++)
{
    cin>>brr[i];
}
for (int i = n-2; i >=0 ; i--)
{
    brr[i]=brr[i]+brr[i+1];
}

long long ans=INTMAX_MAX;
for (int i = 0; i < n; i++)
{
    long long up=(arr[n-1]-arr[i]);
    long long down=(brr[0]-brr[i]);
    long long maxi=max(up,down);
    ans=min(ans,maxi);
    
}

cout<<ans<<endl;

}
return 0;
}