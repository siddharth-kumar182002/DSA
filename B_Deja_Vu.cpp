#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,q;
cin>>n>>q;
vector<long long> arr(n);
vector<long long> x(q);
map<long long,long long > mp;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
for (int i = 0; i < q; i++)
{
    cin>>x[i];
}
vector<long long> st;
vector<long long> vis(31,0);
for (int i = 0; i < q; i++)
{
       if(vis[x[i]]!=1){
        st.push_back(x[i]);
        vis[x[i]]=1;
       }
}
for (int i = 0; i < st.size(); i++)
{
    for (int j = 0; j < n; j++)
    {
        if(arr[j]%(1<<st[i])==0){
            arr[j]=arr[j]+(1<<(st[i]-1));
        }
    }
    
}
for(auto x:arr){
    cout<<x<<" ";
}
cout<<endl;


}
return 0;
}