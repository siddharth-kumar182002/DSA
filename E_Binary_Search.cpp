#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,x;
cin>>n>>x;
vector<long long> arr(n+1);
map<long long,long long> mp;
for (int i = 1; i <=n; i++)
{
    cin>>arr[i];
    mp[arr[i]]=i;
}


long long l=1;
long long r=n+1;
vector<long long> count(n+1,0);
while(r-l>1){
    long long mid=(l+r)/2;
     count[arr[mid]]++;

    if(x>=arr[mid]){
        l=mid;
    }
    else{
        r=mid;
    }
    
     
}

if(arr[l]==x){
    cout<<0<<endl;
}
else{
if(count[x]==0){
    cout<<1<<endl;
    cout<<l<<" "<<mp[x]<<endl;
}
else{
    cout<<1<<endl;
    cout<<mp[x]<<" "<<l<<endl;
}

}




}
return 0;
}