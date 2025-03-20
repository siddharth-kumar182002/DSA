#include <bits/stdc++.h>
using namespace std;
vector<long long> tree[200001];
long long subtreeSize[200001];
 
 
void preprocessing(long long src,long long par){
    long long numNodes=1;
  
 
    for(auto x:tree[src]){
        if(x!=par){
            preprocessing(x,src);
            numNodes+=subtreeSize[x];
           
        }
 
    }
    subtreeSize[src]=numNodes;
}
 
 
long long solve(long long src,long long par,long long &totalNodes){
  

    for(auto child :tree[src]){
        if(child!=par){
           if(subtreeSize[child]*2>(totalNodes)){
              return solve(child,src,totalNodes);
           }
        }
    }
return src;
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
cout<<solve(1,0,n)<<endl;

 
 
return 0;
}