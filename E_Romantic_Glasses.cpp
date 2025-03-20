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
    if(i%2==0){
        arr[i]=-1LL*arr[i];
    }
}
for (int i = 1; i < n; i++)
{
    arr[i]=arr[i]+arr[i-1];
}
/*
for(auto x:arr){
    cout<<x<<" ";
}
cout<<endl;*/
long long f=0;
map<long long,long long> mp;
mp[arr[0]]=1;
for (int i = 1; i < n; i++)
{
    long long req=arr[i];
    if(mp[req] || arr[i]==0){
       // cout<<i<<endl;
       cout<<"YES"<<endl;
        f=1;
        break;
    }
    mp[arr[i]]=1;
}

if(f!=1){
    cout<<"NO"<<endl;
}





}
return 0;
}