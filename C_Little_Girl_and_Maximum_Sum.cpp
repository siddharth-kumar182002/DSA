#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,q;
cin>>n>>q;
vector<long long > arr(n);
for(int i = 0; i < n; i++)
{
    cin>>arr[i];
}

long long sd=0;
vector<pair<long long,long long> > p;
while(q--){
    long long a,b;
    cin>>a>>b;
    p.push_back({a,b});
sd=sd+(b-(n+1)/2)+(a-(n+1)/2);
}
cout<<sd<<endl;
if(sd<0){
    sort(arr.rbegin(),arr.rend());
}
else{
sort(arr.begin(),arr.end());
}
long long sum=0;

vector<long long > psum(n+1,0);
for (int i = 1; i <=n; i++)
{
    psum[i]=psum[i-1]+arr[i-1];
    cout<<psum[i]<<" ";
}

for (int i = 0; i < q; i++)
{
    long long a=psum[i].first;
    long long b=psum[i].second;
sum=sum+psum[b]-psum[a-1];
}


cout<<sum<<endl;
return 0;
}
