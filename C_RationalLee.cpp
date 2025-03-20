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
long long sum=0;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    sum=sum+arr[i];
}
vector<long long> wrr(k);
for (int i = 0; i < k; i++)
{
    cin>>wrr[i];
}
sort(wrr.rbegin(),wrr.rend());
sort(arr.begin(),arr.end());
sum=2*sum;
long long j=0;
long long i=0;
long long count=0;
//cout<<"out"<<sum<<endl;
while(i < n)
{
    if(j<k && wrr[j]!=1){
    long long temp=wrr[j];
    long long mini=arr[i];
      temp--;
      long long x=0;
      while(temp--){
        x=x+arr[i];
        i++;
      }
     // cout<<"x="<<x<<endl;
      sum=sum-2*x+mini;
      j++;
      count++;
    }
    else{
        break;
    }
   // cout<<"in"<<sum<<endl;
}
while(i<n){
    if(count>0){
        sum=sum-arr[i];
        count--;
    }
    i++;
}

cout<<sum<<endl;
}
return 0;
}