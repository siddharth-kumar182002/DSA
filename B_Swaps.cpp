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
vector<long long > arr(n);
vector<long long> brr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
map<long long ,long long> mp;


for (int i = 0; i < n; i++)
{
    cin>>brr[i];
        mp[brr[i]]=i;
}

if(arr[0]<brr[0]){
    cout<<0<<endl;
}
else{
    long long ans=1e10;
    //sort(prr.begin(),prr.end());

    for (auto it = (mp.rbegin()); it!=mp.rend(); it++)
    {
        if(it!=mp.rbegin()){
            auto it1=it;
            it1--;
            (it->second)=min((it->second),it1->second);
        }
    }
    /*for(auto x:mp){
        cout<<x.first<<" "<<x.second<<endl;; 
    }
    cout<<endl;*/
    
for (int i = 0; i <n; i++)
{
    long long moves=i;
    auto it=mp.lower_bound(arr[i]);
    if(it==mp.end()){
        continue;
    }
    else{
        moves=moves+(*it).second;
        ans=min(ans,moves);
    }

}
cout<<ans<<endl;

}

}
return 0;
}