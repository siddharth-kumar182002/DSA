#include <bits/stdc++.h>
using namespace std;
vector<long long> tree[200001];
long long subtreeAns[200001];
long long ans[200001];
long long subtreeSize[200001];


void preprocessing(long long src,long long par){
    long long numNodes=1;
    long long ansSubtree=0;

    for(auto x:tree[src]){
        if(x!=par){
            preprocessing(x,src);
            numNodes+=subtreeSize[x];
            ansSubtree+=subtreeSize[x]+subtreeAns[x];
        }

    }
    subtreeSize[src]=numNodes;
    subtreeAns[src]=ansSubtree;
}


void solve(long long src,long long par,long long par_ans,long long &totalNodes){
    
 ans[src]=subtreeAns[src]+(par_ans+(totalNodes-subtreeSize[src]));
    for(auto child :tree[src]){

        if(child!=par){
            solve(child,src,ans[src]-(subtreeAns[child]+subtreeSize[child]),totalNodes);
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

preprocessing(1,0);
solve(1,0,0,n);
for (int i = 1; i <=n; i++)
{
    cout<<ans[i]<<" ";
}
cout<<endl;


return 0;
}