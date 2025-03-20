#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
set<long long> st;
long long sz=(n*(n-1))/2;
long long maxi=-1e11;
map<long long,long long> mp;

for (int i = 0; i < sz; i++)
{
    long long x;
    cin>>x;
maxi=max(maxi,x);
mp[x]++;
    st.insert(x);
}
vector<long long> ans(n,maxi);
long long i=0;
while(!st.empty() && i<n){
auto node=*st.begin();
st.erase(node);
//cout<<"node="<<node<<endl;
if(mp[node]!=0){
    ans[i]=node;
    if(mp[node]>=(n-i)){
       mp[node]=mp[node]-(n-i-1);
       st.insert(node);
    }
    else{
        mp[node]=0;
    }
}

i++;
}

for(auto x:ans){
    cout<<x<<" ";
}
cout<<endl;
}

return 0;
}