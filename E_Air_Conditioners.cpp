#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
vector<long long> pos(k);
vector<long long> tem(k);
for (int i = 0; i < k; i++)
{
    cin>>pos[i];
}
map<long long,long long> mp; 
for (int i = 0; i < k; i++)
{
    cin>>tem[i];
    mp[pos[i]]=tem[i];
}
long long y=0;
for(auto x:mp){
pos[y]=x.first;
tem[y]=x.second;
y++;
}

vector<long long> ans(n+1,1e18);
multiset<long long> st;

long long j=0;
for (int i = 1; i <=n; i++)
{
    if(i==pos[j]){
    st.insert(tem[j]-pos[j]);
    j++;
    }
    if(!st.empty()){
     ans[i]=min(ans[i],*(st.begin())+i);
    }
}
st.clear();
 j=k-1;
for (int i = n; i >=0; i--)
{
    if(i==pos[j]){
    st.insert(tem[j]+pos[j]);
    j--;
    }
    if(!st.empty()){
     ans[i]=min(ans[i],*(st.begin())-i);
    }
}
for (int i = 1; i <=n; i++)
{
    cout<<ans[i]<<" ";
}
cout<<endl;




}
return 0;
}