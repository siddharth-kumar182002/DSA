#include <bits/stdc++.h>
using namespace std;

vector<long long> tree[200001];
long long depth[200001];
long long ans[200001];



void eval_depth(long long node,long long par){

long long d=0;
for(auto x:tree[node]){
    if(x!=par){
         eval_depth(x,node);
         d=max(d,1+depth[x]);
    }
}

depth[node]=d;
}

void solve(long long src,long long par,long long par_ans){
    vector<long long> pref,suff;
    for(auto x:tree[src]){
        if(x!=par){
            pref.push_back(depth[x]);
            suff.push_back(depth[x]);
        }
    }

for (int i = 1; i <pref.size(); i++)
{
    pref[i]=max(pref[i],pref[i-1]);
}
for (int i = suff.size()-2; i >=0; i--)
{
    suff[i]=max(suff[i],suff[i+1]);
}
ans[src]=1+max(par_ans,(pref.empty()?(-1LL):(pref.back())));
long long count=0;
for(auto x:tree[src]){
    if(x!=par){
        long long op1=(count==0)?(INT16_MIN):(pref[count-1]);
        long long op2=(count==suff.size()-1)?(INT16_MIN):(suff[count+1]);
      long long partial_ans=1+max(max(op1,op2),par_ans);
      solve(x,src,partial_ans);
      count++;
    }
}




}


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);


long long n;
cin>>n;
for (int i = 0; i <n-1; i++)
{
    long long u,v;
    cin>>u>>v;
    tree[u].push_back(v);
    tree[v].push_back(u);
}
eval_depth(1,0);
solve(1,0,-1);
for (int i = 1; i <=n; i++)
{
    cout<<ans[i]<<" ";
}
cout<<endl;

return 0;
}