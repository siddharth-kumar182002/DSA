#include <bits/stdc++.h>
using namespace std;

struct uf{
     const static int n=110;
int  parent[n];
int  Size[n];
void make(){
 memset(parent,-1,sizeof(parent));	
 for (int i = 0; i <n; i++)
 {
    Size[i]=1;
 }
 
}
long long find(long long a){
    if(parent[a]==-1){
        return a;
    }
    return parent[a]=find(parent[a]);
}

void Union(long long a, long long b){
long long u=find(a);
long long v=find(b);
if(u!=v){
    if(Size[u]<Size[v]){
        swap(u,v);
    }
    //u big//v small
parent[v]=u;
Size[u]=Size[u]+Size[v];
}
}
};
uf color[110];
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
 long long n,m;
 cin>>n>>m;
 for (int i = 0; i < 110; i++)
 {
    color[i].make();
 }
 
for (int i = 0; i < m; i++)
{
    long long u,v,c;
    cin>>u>>v>>c;
    color[c].Union(u,v);
}

long long q;
cin>>q;
while(q--){
    long long a,b;
    cin>>a>>b;
    long long ans=0;
    for (int i = 0; i < 110; i++)
    {
        if(color[i].find(a)==color[i].find(b)){
            ans++;
        }
    }
    cout<<ans<<endl;
    
}


return 0;
}