#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long> arr(n);
vector<vector<long long>> pos(n+2);

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    pos[arr[i]].push_back(i);
}

long long l=0;
vector<long long > b;

while(l<n){
long long r=l;
for(long long mex=0;mex<=n+1;mex++){
    auto it=lower_bound(pos[mex].begin(),pos[mex].end(),l);
if(it==pos[mex].end()){
    b.push_back(mex);
    break;
}
r=max(r,*it);
}
l=r+1;
}
cout<<b.size()<<endl;
for(auto x:b){
    cout<<x<<" "; 
}
cout<<endl;

}
return 0;
}