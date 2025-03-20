#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long> arr(n);
vector<long long> prf(n+1);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    prf[i+1]=prf[i]+arr[i];
}
/*for(auto x: prf){
    cout<<x<<" ";
}*/
//cout<<endl;
long long ans=n;
for (int i = 1; i <=n; i++)
{
    long long sum=prf[i];
    long long m=2;
    long long curr=i;
    long long l=i;
    for (int j = i+1; j <=n; j++)
    {
        if(prf[j]>(m*(sum)) || (j==n && prf[j]<(m*(sum)))){
            curr=n;
               break;
        }
        if((m*(sum))==prf[j]){
            m++;
            curr=max(curr,j-l);
            l=j;
        }
       // cout<<"i="<<i<<" "<<"j="<<j<<endl;
        //cout<<"curr="<<curr<<endl;
    }
ans=min(ans,curr);
    
}
cout<<ans<<endl;


}
return 0;
}