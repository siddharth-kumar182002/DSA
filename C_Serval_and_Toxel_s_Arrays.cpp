#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;cin>>t;
    while ( t--)
    {
        int n,m;cin>>n>>m; 
        vector<int>v(n+1);
        map<int,int>mp;
        vector<int>prev_ind(n+1,0);
        for ( int i = 1; i <  n+1; i++)
        {
            cin>>v[i];
        }

        int ans=m*(m+1)*n;
        int sub=0;
        for(int i=1;i<=m;i++){
            int ind,val;cin>>ind>>val;
            if(v[ind]!=val){
                mp[v[ind]]+=i-prev_ind[ind];
                v[ind]=val;
                prev_ind[ind]=i;
            }
        }
        for(int i=1;i<=n;i++){
            mp[v[i]]+=(m+1-prev_ind[i]);
        }
        for(auto p:mp){
            int freq=p.second;
            sub-=(freq*(freq-1))/2;
        }
        cout<<ans+sub<<endl;
    }       
}