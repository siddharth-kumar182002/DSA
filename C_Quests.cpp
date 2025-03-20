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
vector<long long> brr(n);


for (int i = 0; i <n; i++)
{
    cin>>arr[i];
}
for (int i = 0; i < n; i++)
{
    cin>>brr[i];
}
long long ans=-1;
long long maxi=-1;
long long sum=0;
for (int i = 0; i < n; i++)
{
    if(k-1>=0){
    sum=sum+arr[i];
    k--;
    }
    maxi=max(maxi,brr[i]);
    ans=max(ans,sum+k*maxi);

}

cout<<ans<<endl;

}
return 0;
}