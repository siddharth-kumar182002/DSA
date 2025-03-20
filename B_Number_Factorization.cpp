#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
int t;
cin>>t;
while(t--){
ll n;
	    cin>>n;
	    
	    map<ll,ll> m;
	    ll e=n;
	   
	    for(int i=2;i<=(int)(sqrt(e));i++)
	    {
	        while(e%i==0)
	        {
	          m[i]++;
	          e/=i;
	        }
	    }
	    
	    if(e!=1)
	    m[e]++;
	    for (auto &i : m)
        {
            cout<<i.first<<" "<<i.second<<" ";
        }
        cout<<endl;
        
	    vector<pair<ll,ll>> v;
	    
	    for(auto &p:m)
	    v.push_back({p.second,p.first});
	    
	    sort(v.begin(),v.end());
        for (auto i : v)
        {
            cout<<i.first<<" "<<i.second<<" ";
        }
        cout<<endl;
        
	    
	    vector<ll> product(v.size());
	    product[v.size()-1]=v[v.size()-1].second;
	    
	    for(int i=v.size()-2;i>=0;i--)
	    product[i]=(product[i+1]*v[i].second);
	    
        for (auto i : product)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        
	    
	    ll used=0,ans=0;
	    for(int i=0;i<v.size();i++)
	    {
	        ll left=v[i].first-used;
	        cout<<"left"<<left<<endl;
	        if(left<=0)
	        continue;
	        
	        ans+=(left*product[i]);
	        used+=left;
	    }
	    cout<<ans<<endl;
	    
	 }
}