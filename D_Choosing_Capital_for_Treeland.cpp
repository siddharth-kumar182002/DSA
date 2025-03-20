#include <bits/stdc++.h>
using namespace std;

vector<long long> tree[200005];

int dp1[200005];
int dp2[200005];


void solve(long long src,long long par,map<pair<long long,long long>,long long> &mp){

//cout<<"src="<<src<<endl;
    for(auto x:tree[src]){
        if(x!=par){
        solve(x,src,mp);
        }
    }

    for(auto x:tree[src]){
             if(x!=par){
                if(mp[{src,x}]==1){
                    dp1[src]+=dp1[x];
                }
                else{
                    dp1[src]+=1+dp1[x];
                }
             }
    }
}

void solve1(long long src,long long par,map<pair<long long,long long>,long long> &mp){

dp2[src]=dp1[src];
 if(par!=-1){

    dp2[src]+=(dp2[par]-dp1[src]);

    if(mp[{src,par}]==1){
        dp2[src]-=1;
    }
    else{
         dp2[src]+=1;
    }


    }



    for(auto x:tree[src]){
        if(x!=par){
        solve1(x,src,mp);
        }
    }
   
}


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);


long long n;
cin>>n;
map<pair<long long,long long>,long long> mp;
for (int i = 0; i < (n-1); i++)
{
    long long u,v;
    cin>>u>>v;
    tree[u].push_back(v);
    tree[v].push_back(u);
    mp[{u,v}]=1;
    mp[{v,u}]=0;
}

solve(1,-1,mp);
solve1(1,-1,mp);
long long mini=1e16;
for(int i=1;i<=n;i++){
    mini=min(mini,dp2[i]*1LL);
}

vector<long long> ans;
for (int i =1; i <=n; i++)
{
    if(dp2[i]==mini){
        ans.push_back(i);
    }
}


cout<<mini<<endl;

for(auto x:ans){
    cout<<x<<" ";
}
cout<<endl;

return 0;
}