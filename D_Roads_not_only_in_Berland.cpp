#include <bits/stdc++.h>
using namespace std;
// DSU
 
vector<long long> dsp;
vector<long long> si;
void make(long long v){
    // makes new node
    dsp[v]=v;
    si[v]=1;
}
long long find(long long v){
    // finds parent
    if(v==dsp[v]) return v;
    return dsp[v]=find(dsp[v]);
}
void unio(long long a,long long b){
    // merges two sets
    a=find(a);
    b=find(b);
    if(a!=b){
        if(si[a]<si[b]) swap(a,b);
        dsp[b]=a;
        si[a]+=si[b];
    }
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n;
cin>>n;
dsp.resize(n+1);
si.resize(n+1,0);
for (int i = 1; i <=n; i++)
{
    make(i);
}

long long temp=n;
temp--;
vector<pair<long long,long long>> close;
while(temp--){
    long long a,b;
    cin>>a>>b;
    if(find(a)==find(b)){
        close.push_back({a,b});
    }
    unio(a,b);
}
vector<long long> open;
for (int i = 1; i <=n; i++)
{
    if(find(i)==i){
       open.push_back(i);
    }
}

cout<<close.size()<<endl;

for (int i = 0; i < close.size(); i++)
{
    cout<<close[i].first<<" "<<close[i].second<<" "<<open[i]<<" "<<open[i+1]<<endl;
}






return 0;
}