#include <bits/stdc++.h>
using namespace std;
int main() {
long long n,m;
cin>>n>>m;
long long q=n;
vector<long long> arr;
long long sum=0;
while(q--){
    long long c,t;
    cin>>c>>t;

sum=sum+c*t;
arr.push_back(sum);
}
/*for(auto &x:arr){
    cout<<x<<" ";
}
cout<<endl;*/
vector<long long> ans;

for (int i = 0; i < m; i++)
{
    long long k;
    cin>>k;
    auto it1 = lower_bound(arr.begin(), arr.end(), k);
   long long  pos1 = (it1-arr.begin());
    ans.push_back(pos1+1);
   /* long long lo=0;
    long long hi=n-1;
    //cout<<"hi"<<hi<<" ";
    while(hi-lo>1){
        long long mid=(hi+lo)/2;

        if(arr[mid]<k){
            lo=mid+1;
         }
         else{
        hi=mid;
         }
         //cout<<"lo"<<lo<<" ";
         //cout<<"hi"<<lo<<" ";
    }
    if(arr[lo]>=k){
        ans.push_back(lo+1);
    }
    else{
        ans.push_back(hi+1);
    }*/
}
for (int i = 0; i < m; i++)
{
    cout<<ans[i]<<endl;
}


return 0;
}