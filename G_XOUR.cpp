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
vector<long long> arr(n);
priority_queue<long long,vector<long long>,greater<long long>> pq1;
priority_queue<long long,vector<long long>,greater<long long>> pq2;
map<long long,priority_queue<long long,vector<long long>,greater<long long>>> mp;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
long long x=arr[i];
x=x>>2;
mp[x].push(arr[i]);
}

for (int i = 0; i < n; i++)
{
    long long x=arr[i];
x=x>>2;
arr[i]=mp[x].top();
mp[x].pop();
}

for(auto x:arr){
    cout<<x<<" ";
 }
 cout<<endl;






}
return 0;
}