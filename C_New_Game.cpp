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
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}


sort(arr.begin(),arr.end());

long long l=0;
long long r=0;
map<long long,long long> mp;
mp[arr[0]]++;
long long count=1;
long long ans=1;
while(r<n){

while(count>k){
    mp[arr[l]]--;
    if(mp[arr[l]]==0){
        count--;
    }
    l++;
}
ans=max(ans,r-l+1);
long long prv=r;
r++;
if(mp[arr[r]]==0){
    count++;
    if(arr[r]-arr[prv]>1){
        count=1;
        l=r;
        mp.clear();
    }
}
mp[arr[r]]++;
}

cout<<ans<<endl;
}
return 0;
}