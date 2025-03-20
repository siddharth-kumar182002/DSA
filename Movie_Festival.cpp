#include <bits/stdc++.h>
using namespace std;
int main() {
long long n;
cin>>n;
vector<pair<long long ,long long >>p(n);
for (int i = 0; i < n; i++)
{
     cin>>p[i].second>>p[i].first;
}
sort(p.begin(),p.end());

long long ans=0;
long long currded=0;
for (int i = 0; i < n; i++)
{
    if(p[i].second>=currded){
        currded=p[i].first;
        ans++;
    }


}
cout<<ans<<endl;


return 0;
}