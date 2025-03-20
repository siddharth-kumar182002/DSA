#include <bits/stdc++.h>
using namespace std;
pair<long long,long long> fun(vector<pair<long long,long long>> &arr){

long long prv=(arr.back()).first;
long long ans=prv;
long long one=(arr.back()).second;
for (int i = arr.size()-2; i>=0; i--)
{
    if(prv==0){
        break;
    }
      if((arr[i].first)>=prv){
        ans=ans+prv-1;
        one+=min(arr[i].second,(prv-1));
        prv=prv-1;
      }
      else{
        ans=ans+arr[i].first;
         one+=arr[i].second;
        prv=arr[i].first;
      }
      
}
return {ans,one};
}

bool comp(pair<long long,long long> a,pair<long long,long long> b){
        if(a.first!=b.first){
            return (a.first<b.first);
        }
        else{
            return (a.second<b.second);
        }
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
map<long long,long long> mp;
map<long long,long long> mp1;
for (int i = 0; i < n; i++)
{
    long long x,f;
    cin>>x>>f;
    mp[x]++;
    if(f>0){
          mp1[x]++;
    }
   
}

vector<pair<long long,long long>> arr;
for(auto x:mp){
arr.push_back({x.second,mp1[x.first]});
}
sort(arr.begin(),arr.end(),comp);
for(auto x:arr){
    cout<<x.first<<" "<<x.second<<endl;
}
cout<<endl;
pair<long long,long long> ans=fun(arr);
cout<<ans.first<<" "<<ans.second<<endl;
}
return 0;
}