#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long> arr(1001,0);


for (int i= 1; i <=n; i++)
{
   int temp;
   cin>>temp;
    arr[temp]=i;
}

long long ans=-1;
for (int i = 1; i <1001; i++)
{
    for (int j = 1; j < 1001; j++)
    {
        if(__gcd(i,j)==1 && arr[i]!=0 && arr[j]!=0){
                         ans=max(ans,arr[i]+arr[j]);
        }
    }
    
}

cout<<ans<<endl;




}
return 0;
}