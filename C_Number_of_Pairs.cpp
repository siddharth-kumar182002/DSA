#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,l,r;
cin>>n>>l>>r;
vector<long long> arr(n);

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
/*
for(auto x:arr){
    cout<<x<<" ";
}
cout<<endl;*/
long long ans=0;
sort(arr.begin(),arr.end());
//l r
for (int i = 0; i < n; i++)
{
     long long x=r-arr[i];
     long long y=l-arr[i];
     long long it1=upper_bound(arr.begin(),arr.end(),x)-arr.begin();
     it1--;
     long long it2=lower_bound(arr.begin(),arr.end(),y)-arr.begin();
     
     if(it1==-1 || it2==n){
        continue;
     }
     if(arr[i]<=x && arr[i]>=y){
        ans--;
     }
     //cout<<"i="<<i<<endl;

     ans=ans+(it1-it2+1);


}
cout<<((ans)/2)<<endl;


}
return 0;
}