#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);

long long n;
cin>>n;
vector<long long> arr(n);
vector<long long> brr(n);
map<long long,long long> mp;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
for (int i = 0; i < n; i++)
{
    cin>>brr[i];
    mp[brr[i]-arr[i]]++;
}
// for(auto x:mp){
//     cout<<x.first<<" "<<x.second<<endl;
// }
// cout<<endl;
auto it=mp.begin();
it++;
for (auto i = it; i!=mp.end(); i++)
{
    auto j=i;
    j--;
    i->second=(i->second)+(j->second);
}

// for(auto x:mp){
//     cout<<x.first<<" "<<x.second<<endl;
// }
// cout<<endl;


long long ans=0;
for (int i = 0; i < n; i++)
{
   // cout<<"i="<<i<<endl;
    if(arr[i]==brr[i]){
        auto ind=mp.lower_bound(0);
        if(ind==mp.begin()){
            continue;
        }
        ind--;
         ans=ans+((ind->second));
    }
    else if(arr[i]<brr[i]){
           auto ind=mp.lower_bound(arr[i]-brr[i]);
        if(ind==mp.begin()){
            continue;
        }
        ind--;
        // cout<<"in1="<<(ind->first)<<endl;
         ans=ans+((ind->second));
    }
    else{
             auto ind=mp.lower_bound(arr[i]-brr[i]);
        if(ind==mp.begin()){
            continue;
        }
        ind--;
       // cout<<"in2="<<(ind->first)<<endl;
         ans=ans+((ind->second));
         ans--;
    }
    //cout<<ans<<" "<<endl;
}
//cout<<endl;
cout<<ans/2<<endl;



return 0;
}