#include <bits/stdc++.h>
using namespace std;
int main() {
     freopen("hayfeast.in", "r", stdin);
    freopen("hayfeast.out", "w", stdout);
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,m;
cin>>n>>m;
vector<pair<long long,long long>> pr;
for (int i = 0; i < n; i++)
{
    long long a,b;
    cin>>a>>b;
    pr.push_back({a,b});
}

long long r=0;
multiset<long long> ms;
long long sum=0;
long long ans=LONG_LONG_MAX;
for (int l = 0; l < n; l++)
{
    
    while(r<n && sum<m){
        ms.insert(pr[r].second);
        sum=sum+pr[r].first;
        r++;
    }

if(sum>=m){
    ans=min(ans,*ms.rbegin());
}

ms.erase(ms.find(pr[l].second));
sum=sum-pr[l].first;


}
cout<<ans<<endl;
return 0;
}