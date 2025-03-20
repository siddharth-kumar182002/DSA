#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,a,b;
cin>>n>>a>>b;
vector<long long> arr;
set<long long> st;
for (int i = 0; i < n; i++)
{
    long long x;
    cin>>x;
    st.insert(x);
}
for(auto x:st){
arr.push_back(x);
}
long long m=arr.size();



if(a>b){
    swap(a,b);
}
long long ans=1e16;
long long prv=a;
while(a!=0){
prv=a;
b=b%a;
if(a>b){
    swap(a,b);
}
}

for (int i = 0; i < m-1; i++)
{
    long long d=arr[m-1]-arr[i];
    long long k=d/prv;
    arr[i]=arr[i]+prv*k;
}
sort(arr.begin(),arr.end());
ans=min(ans,arr[m-1]-arr[0]);
for (int i = 0; i < m-1; i++)
{
    ans=min(ans,(arr[i]+prv)-arr[i+1]);
}




cout<<ans<<endl;
}
return 0;
}