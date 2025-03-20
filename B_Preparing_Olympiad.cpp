#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);

long long n,l,r,x;
cin>>n>>l>>r>>x;
vector<long long> arr(n);
for (int i = 0; i <n; i++)
{
    cin>>arr[i];
}
long long ans=0;
long long poss=1<<n;
for (long long i = 3; i < poss; i++)
{
    if(!(i&(i-1))){
          continue;
    }
   // cout<<"i="<<i<<endl;
    long long maxi=-1;
    long long mini=1e16;
    long long total=0;

    for (int j = 0; j <=15; j++)
    {
       if(i & (1LL<<j)){
            //cout<<"j="<<j<<endl;
            mini=min(mini,arr[j]);
            maxi=max(maxi,arr[j]);
            total+=arr[j];
        }
    }
    
    if(total>=l && total<=r && (maxi-mini)>=x){
        ans++;
    }
    
}
cout<<ans<<endl;



return 0;
}