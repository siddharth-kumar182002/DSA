#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool comp(pair<ll,ll> &p1,pair<ll,ll> &p2){
    return p1.second<p2.second;
}
int main() {
ll n,m;
      cin>>n>>m;
      map<ll,vector<pair<ll,ll> >> mp;
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<m;j++)
          {
              ll x;
              cin>>x;
              mp[x].push_back({i,j});
          }
      }
      ll ans=0;
      for(auto it:mp)
      {
          vector<pair<ll,ll> > v=it.second;
          sort(v.begin(),v.end());
          ll sum=0;
          for(int i=0;i<v.size();i++) sum+=v[i].first;
          for(int i=0;i<v.size();i++)
          {
              sum-=v[i].first;
              ans+= ( sum - ((v.size()-1-i)*v[i].first));
          }
          sort(v.begin(),v.end(),comp);
          sum=0;
          for(int i=0;i<v.size();i++) sum+=v[i].second;
          for(int i=0;i<v.size();i++)
          {
              sum-=v[i].second;
              ans+= ( sum - ((v.size()-1-i)*v[i].second));
          }
      }
      cout<<ans<<endl;
return 0;
}