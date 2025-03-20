#include <bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long> vis(n+1,0);
map<long long,pair<long long,long long>> m2;
vector<long long > arr1;
vector<long long> c;

for (int i = 0; i < n; i++)
{
    long long x;
    cin>>x;
    arr1.push_back(x);
}
for (int i = 0; i <n; i++)
{
    long long x;
    cin>>x;
m2[x]={arr1[i],i};
}
for (int i = 0; i < n; i++)
{
    long long x;
    cin>>x;
    c.push_back(x);
}
long long ans=1;
for (int i = 1; i <=n; i++)
{
   // cout<<"i="<<i<<endl;
    long long f=0;
    long long count=0;
    if(vis[i]==0){
        queue<long long> q;
          q.push(i);
          vis[i]=1;
          count++;
          while(!q.empty()){
            auto node=q.front();
            if(c[m2[node].second]!=0){
                        f=1;
                       }
          //  cout<<node<<" ";
            q.pop();
            if(vis[m2[node].first]==0){
                q.push(m2[node].first);
                count++;
                 vis[m2[node].first]=1;
            }
          }
        //  cout<<"f="<<f<<endl;
          //cout<<endl;
          if(count>1 && f==0){
            (ans=(ans*2))%=mod;
            }
    }
}
cout<<ans<<endl;


}
return 0;
}