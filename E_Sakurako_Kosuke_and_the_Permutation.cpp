#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vll;
vll dsp;
vll si;
void make(ll v){
    // makes new node
    dsp[v]=v;
    si[v]=1;
}
ll find(ll v){
    // finds parent
    if(v==dsp[v]) return v;
    return dsp[v]=find(dsp[v]);
}
void unio(ll a,ll b){
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
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
//cout<<"hi"<<endl;
vector<long long> arr(n);
for (int i = 0; i <n; i++)
{
    cin>>arr[i];
}
dsp.assign(n+1,0);
si.assign(n+1,1);

for (int i = 1; i <=n; i++)
{
    dsp[i]=i;
}
for (int i = 1; i <=n; i++)
{
    unio(i,arr[i-1]);
}
vector<long long> a(n+1,0);
for (int i = 1; i <=n; i++)
{
    a[find(i)]++;
}
long long ans=0;
for (int i = 1; i <=n; i++)
{
    if(a[i]){
         ans+=(a[i]-1)/2;
    }
   
}

cout<<ans<<endl;


}
return 0;
}