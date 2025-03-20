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
if(n==1){
    cout<<1<<endl;
    continue;
}
vector<long long> prf;
vector<long long> suf;
long long ind=0;
for (int i = 0; i <n-1; i=i+2)
{
    prf.push_back(arr[i+1]-arr[i]);
   
    
    if(ind>0){
        prf[ind]=max(prf[ind],prf[ind-1]);
    }
    ind++;
}
ind=0;
for (int i = n-1; i >0; i=i-2)
{
    suf.push_back(arr[i]-arr[i-1]);
    
    if(ind>0){
        suf[ind]=max(suf[ind],suf[ind-1]);
    }
    ind++;
}
// for(auto x:prf){
//     cout<<x<<" ";
// }
// cout<<endl;
// for(auto x:suf){
//     cout<<x<<" ";
// }
// cout<<endl;
if(n%2==0){
    long long x=prf.size();
    cout<<prf[x-1]<<endl;
}
else{
    long long ans=LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        if(i==0){
            long long x=suf.size();
            ans=min(ans,suf[x-1]);
            continue;
        }
        if(i==(n-1)){
                long long z=prf.size();
                ans=min(ans,prf[z-1]);
                continue;
        }
        if((i%2==0) && (arr[i]-arr[i-1]>1)){
            long long x=i/2;
            long long temp=-1;
                temp=max(temp,prf[x-1]);
                long long y=(n-1-i)/2;
                if(y!=0){
                    temp=max(temp,suf[y-1]);
                }
                ans=min(ans,temp);
        }
       // cout<<"i="<<" "<<ans<<endl;
    }
    cout<<ans<<endl;
}


}
return 0;
}