#include <bits/stdc++.h>
using namespace std;

struct dsu{
    vector<long long> size;
    vector<long long> par;
    public:

    dsu(long long n){
        size.resize(n,1);
        par.resize(n);
        for (int i = 0; i < n; i++)
        {
            par[i]=i;
        }
    } 

    long long find(long long node){
        if(par[node]==node){
            return node;
        }
        return par[node]=find(par[node]);
    }

    void merg(long long u,long long v){
             long long paru=find(u);
             long long parv=find(v);
             if(paru!=parv){
                  if(size[paru]>size[parv]){
                    swap(paru,parv);
                  }
                  size[parv]+=size[paru];
                  par[paru]=parv;
             }
             return;
    }
};







struct road{
  long long u,v,c;
};


bool comparator(road a, road b){
return ((a.c)<(b.c));
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,m;
cin>>n>>m;

vector<road> roads;
for (int i = 0; i < m; i++)
{
    road x;
    cin>>x.u>>x.v>>x.c;
    x.u--;
    x.v--;
    roads.push_back(x);
}
sort(roads.begin(),roads.end(),comparator);
// for(auto x:roads){
//     cout<<x.u<<" "<<x.v<<" "<<x.c<<endl;
// }
dsu d(n);
long long count=0;
long long sum=0;
for(auto x:roads){
    if(d.find(x.u)!=d.find(x.v)){
        d.merg(x.u,x.v);
        sum+=x.c;
        count++;
    }
}
if(count!=(n-1)){
    cout<<"IMPOSSIBLE"<<endl;
}
else{
cout<<sum<<endl;
}

return 0;
}