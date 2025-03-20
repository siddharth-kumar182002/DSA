#include <bits/stdc++.h>
using namespace std;
int main() {
long long n;
cin>>n;
vector<long long> adjx[1001],adjy[1001];
map<pair<long long,long long>,long long> vis;
vector<pair<long long,long long>> prr;
for (int i = 0; i < n; i++)
{
    long long x,y;
    cin>>x>>y;
    vis[{x,y}]=1;
    prr.push_back({x,y});
    adjx[x].push_back(y);
    adjy[y].push_back(x);

}
int count=0;
for (int i=0;i<n;i++)
{
    if(vis[prr[i]]==2){
        continue;
    }
count++;
    queue<pair<long long,long long>> q;
    q.push(prr[i]);
    //vis[prr[i]]=2;
    while(!q.empty()){
       auto it=q.front();
       long long x=it.first;
       //cout<<it.first<<" "<<it.second<<endl;
       //cout<<"vis="<<vis[it]<<endl;
       q.pop();
       for(auto y:adjx[x]){
        if(vis[{x,y}]==1){
            q.push({x,y});
        vis[{x,y}]=2;
           for(auto node:adjy[y]){
            if(vis[{node,y}]==1)
            q.push({node,y});
            vis[{node,y}]=2;
           }
        }
       }
    }

}

cout<<count-1<<endl;





return 0;
}