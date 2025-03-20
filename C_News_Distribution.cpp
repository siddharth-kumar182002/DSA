#include <bits/stdc++.h>
using namespace std;
const long long N=5*1e5+10;
vector<long long> parent(N);
vector<long long> Size(N,0);
void make(long long a){
 parent[a]=a;
 Size[a]=1;
}
long long find(long long a){
    if(parent[a]==a){
        return a;
    }
    return parent[a]=find(parent[a]);
}

void Union(long long a, long long b ){
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
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
 long long n,m;
 cin>>n>>m;
 for (int i = 1; i <=n; i++)
 {
    make(i);
 }
 
while(m--){
 long long k;
 cin>>k;
 long long x1;
 for (int i = 0; i < k; i++)
 {
    if(i==0){
        cin>>x1;
        continue;
    }
    long long x;
    cin>>x;
    Union(x1,x);

 }

}

for (int i = 1; i <=n; i++)
{
    long long a=find(i);
    cout<<Size[a]<<" ";
}
cout<<endl;




return 0;
}