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

priority_queue<long long> pq;
map<long long,long long> mp;
vector<long long> brr;
for (int i = 0; i <n; i++)
{
    long long x;
    cin>>x;
    mp[x]++;
}
long long ans=n;
for(auto x:mp){
    pq.push(x.second);
}

while(pq.size()>=2){
long long x=pq.top();
pq.pop();
long long y=pq.top();
pq.pop();
x--;
y--;
ans=ans-2;
if(x>0){
    pq.push(x);
}
if(y>0){
    pq.push(y);
}
}
cout<<ans<<endl;



}
return 0;
}