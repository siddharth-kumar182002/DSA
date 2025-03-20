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
vector<long long> sum(n+1,0);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
   
}
for (int i = 1; i <=n; i++)
{
    sum[i]=sum[i-1]+arr[i-1];
}

string s;
cin>>s;

vector<long long> l;
vector<long long> r;
for (int i = 0; i < n; i++)
{
    if(s[i]=='L'){
        l.push_back(i);
    }
    else{
        r.push_back(i);
    }
}
// for(auto x:sum){
//     cout<<x<<" ";
// }
// cout<<endl;
// for(auto x:l){
//     cout<<x<<" ";
// }
// cout<<endl;
// for(auto x:r){
//     cout<<x<<" ";
// }
// cout<<endl;
long long a=0;
long long b=r.size()-1;
long long ans=0;
if(l.size()==0 || r.size()==0){
    cout<<0<<endl;
    continue;
}
while(a<l.size() && b>=0 &&  l[a]<r[b]){
ans=ans+sum[r[b]+1]-sum[l[a]];
//cout<<"hihi"<<(r[b]+1)<<endl;
//cout<<(sum[r[b]+1]-sum[l[a]])<<endl;
a++;
b--;
}
cout<<ans<<endl;




}
return 0;
}