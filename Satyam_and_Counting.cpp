#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
map<long long,long long> up;
map<long long,long long > down;
for (int i = 0; i < n; i++)
{
    long long x,y;
    cin>>x>>y;
    if(y==0){
        down[x]=1;
    }
    else{
        up[x]=1;
    }
}

long long ans=0;
long long u=up.size();
long long d=down.size();
for (int i = 0; i <=n; i++)
{
    if(up[i]==1 && down[i]==1){
        ans=ans+max(0*1LL,u)-1;
        ans=ans+max(0*1LL,d)-1;
    }
}
// cout<<ans<<endl;
// for(auto x:up){
//     cout<<x.first<<" ";
// }
// cout<<endl;
for(auto x:up){
    long long node=x.first;
    if(x.second==1 && down[node-1]==1 && down[node+1]==1){
        //cout<<node<<endl;
        ans++;
    }
}

for(auto x:down){
    long long node=x.first;
    if(x.second==1 && up[node-1]==1 && up[node+1]==1){
        ans++;
    }
}

cout<<ans<<endl;

}
return 0;
}