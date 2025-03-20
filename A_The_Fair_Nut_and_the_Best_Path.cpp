#include <bits/stdc++.h>
using namespace std;


vector<pair<long long,long long>> tree[300005];
long long w[300005];
long long depth[300005];
long long diameter[300005];


void hit(long long src,long long par){

    for(auto x:tree[src]){
        if(x.second!=par){
            hit(x.second,src);
        }
    }

vector<long long> child;
    for(auto x:tree[src]){
        if(x.second!=par){
         child.push_back((x.first)*(-1)+depth[x.second]);
        }
    }
    sort(child.begin(),child.end());
   long long num=child.size();

   if(num==0){
depth[src]=w[src];
}
else{
depth[src]=max(w[src],w[src]+child[num-1]);
}

}


void solve(long long src,long long par){

long long ans=0;
vector<long long> child;
for(auto x:tree[src]){
    if(x.second!=par){
solve(x.second,src);
ans=max(ans,diameter[x.second]);
child.push_back((depth[x.second]-x.first));
    }
}

sort(child.begin(),child.end());


long long num=child.size();

if(num==0){
diameter[src]=w[src];
}
else if(num==1){
diameter[src]=w[src]+child[num-1];
}
else{
diameter[src]=w[src]+child[num-1]+child[num-2];

}

diameter[src]=max(ans,diameter[src]);
diameter[src]=max(depth[src],diameter[src]);


}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);

long long n;
cin>>n;

for (int i = 1; i <=n; i++)
{
    cin>>w[i];
}

for (int i = 0; i < n-1; i++)
{
    long long u,v,x;
    cin>>u>>v>>x;
    tree[u].push_back({x,v});
    tree[v].push_back({x,u});
}

hit(1,-1);

solve(1,-1);

cout<<diameter[1]<<endl;

return 0;
}