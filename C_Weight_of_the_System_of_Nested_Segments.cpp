#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n,m;
cin>>n>>m;

vector<pair<pair<long long,long long>,long long >> arr;
for (int i = 0; i < m; i++)
{
    pair<long long ,long long > p;
    cin>>p.first>>p.second;
    arr.push_back({p,i+1});
}

sort(arr.begin(),arr.end());
vector<long long> srr(m);
srr[m-1]=arr[m-1].first.second;
for ( int i = m-2; i >=0; i--)
{
    srr[i]=srr[i+1]+arr[i].first.second;
}
for(auto x: srr){
    cout<<x<<" ";
}
cout<<endl;
vector<long long> mrr(m-(n-1));
mrr[m-(n-1)-1]=srr[m-(n-1)-1];
for (int i = m-(n-1)-2; i >=0; i--)
{
    mrr[i]=(srr[i]-srr[i+n]);
}
for(auto x: mrr){
    cout<<x<<" ";
}
cout<<endl;
vector<long long > mini(m-(n-1));
mini[m-(n-1)-1]=mrr[m-(n-1)-1];
for (int i = m-(n-1)-2; i >=0; i--)
{
    mini[i]=min(mrr[i],mini[i+1]);
}
for(auto x: mini){
    cout<<x<<" ";
}
cout<<endl;

long long ans=1e9;
long long prv=1e9;
long long ind=0;
//mrr
//mini
for (int i = 0; i+n< mrr.size(); i++)
{
    ans=min(ans,mrr[i]+mini[i+n]);
    if(ans!=prv){
        ind=i;
        prv=ans;
    }
}
cout<<ans<<endl;
cout<<"ind="<<ind<<endl;
long long req=ans-mrr[ind];
long long ind2;

for (int i = ind+n; i < mrr.size(); i++)
{
     if(mrr[i]==req){
        ind2=i;
     }
}
cout<<"ind2="<<ind2<<endl;

cout<<ans<<endl;
for (int i = 0; i < n; i++)
{
    cout<<arr[ind+i].second<<" "<<arr[ind2+n-1-i].second<<endl;
}



}
return 0;
}