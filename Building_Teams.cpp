#include <bits/stdc++.h>
using namespace std;
bool f(long long c,long long node,vector<long long> &col,vector<long long> graph[]){

col[node]=c;

for(auto it:graph[node]){

if(col[it]==-1){
   if(!f(!c,it,col,graph)){
    return false;
   };
}
else if(col[it]==c){
    return false;
}
}

return true;

}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,m;
cin>>n>>m;
vector<long long> graph[n+1];
for (int i = 0; i < m; i++)
{
    long long a,b;
    cin>>a>>b;
    graph[a].push_back(b);
    graph[b].push_back(a);
}

vector<long long> col(n+1,-1);
long long fl=0;
for (int i = 1; i <=n; i++)
{
    if(col[i]==-1){
        if(!(f(1,i,col,graph))){
            fl=1;
             break;
        }
    }
    if(fl==1){
        break;
    }
}

if(fl!=1){
for (int i = 1; i <=n; i++)
{
    if(col[i]==0){
        cout<<2<<" ";
    }
    else{
        cout<<1<<" ";
    }
}

cout<<endl;
}
else{
    cout<<"IMPOSSIBLE"<<endl;
}


return 0;
}