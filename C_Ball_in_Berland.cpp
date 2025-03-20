#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long a,b,k;
cin>>a>>b>>k;
vector<long long> boys(a,0);
vector<long long> girls(b,0);
vector<pair<long long ,long long>> edges(k);
for (int i = 0; i < k; i++)
{
    long long x;
    cin>>x;
    edges[i].first=x;
    boys[x-1]++;
}
for (int i = 0; i < k; i++)
{
    long long x;
    cin>>x;
    edges[i].second=x;
    girls[x-1]++;
}
long long ans=0;
for (int i = 0; i < k; i++)
{
    long long a=edges[i].first;
    long long b=edges[i].second;
    //cout<<"A="<<a<<endl;
ans=ans+(k-boys[a-1]-girls[b-1]+1);
}
cout<<ans/2<<endl;

}
return 0;
}