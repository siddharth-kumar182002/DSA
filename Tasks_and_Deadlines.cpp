#include <bits/stdc++.h>
using namespace std;
int main() {
long long n;
cin>>n;
vector<pair<long long,long long >> p;
for (int i = 0; i < n; i++)
{
    long long dur,ded;
    cin>>dur>>ded;
    p.push_back({dur,ded});
}
sort(p.begin(),p.end());
long long ans=0;
long long curr=0;
for (int i = 0; i < n; i++)
{
   // cout<<p[i].first<<endl;
    curr=curr+p[i].first;
    ans=ans+(p[i].second-curr);
   // curr=curr+p[i].first;

}
cout<<ans<<endl;

return 0;
}