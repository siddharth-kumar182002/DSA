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
vector<pair<long long,long long> > p;

for (int i = 0; i < n; i++)
{
    long long k;
    cin>>k;
    long long maxi=-1;
    for (int j = 0; j < k; j++)
    {
        long long x;
        cin>>x;
        maxi=max(maxi,x-j+1);
    }
    
p.push_back({maxi,k});
}

sort(p.begin(),p.end());
long long ans=-1;
long long temp=0;
for (int i = 0; i < n; i++)
{
    ans=max(ans,(p[i].first-temp));
    temp=temp+p[i].second;
}
cout<<(ans)<<endl;

}
return 0;
}