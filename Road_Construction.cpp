#include <bits/stdc++.h>
using namespace std;
class dsu{
    vector<long long> size;
    vector<long long> par;
public:

    dsu(long long n){
        size.resize(n,1);
        par.resize(n);
        for (int i = 0; i <n; i++)
        {
            par[i]=i;
        }
    }

    long long find(long long u){
        if(u==par[u]){
            return u;
        }
        return par[u]=find(par[u]);
    }

    void merge(long long node1,long long node2){
        long long u=find(node1);
        long long v=find(node2);
        if(par[u]!=par[v]){
            if(size[u]>size[v]){
                swap(u,v);
            }
            size[v]+=size[u];
            par[u]=v;
        }
        return ;
    }

    long long sz(long long u){
        return size[u];
    }
};


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,m;
cin>>n>>m;

vector<pair<long long,long long>> ans;

dsu d(n);

long long maxi=1;
long long comp=n;
for (int i = 0; i < m; i++)
{
    long long x,y;
    cin>>x>>y;
    x--;
    y--;
    long long u=d.find(x);
    long long v=d.find(y);
    //cout<<"u="<<u<<" "<<"v="<<v<<endl;
    if(u!=v){
       comp--;
       d.merge(x,y);
      // cout<<d.sz(u)<<" "<<d.sz(v)<<endl;
        maxi=max({maxi,d.sz(u),d.sz(v)});
        ans.push_back({comp,maxi});
    }
    else{
         ans.push_back({comp,maxi});
    }
    
}

for(auto x:ans){
    cout<<x.first<<" "<<x.second<<endl;
}
cout<<endl;


return 0;
}