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
vector<long long> arr(n);
set<long long> st;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    st.insert(arr[i]);
}
long long x=st.size();
vector<long long> ans;

if(x<=k){
    for(auto x:st){
ans.push_back(x);
}
while(ans.size()<k){
    ans.push_back(1);
}

    
    long long temp=99;
    while(temp--){
           for (int i = 0; i <k; i++)
           {
            ans.push_back(ans[i]);
           }
           
    }
    cout<<ans.size()<<endl;
    for(auto x:ans){
        cout<<x<<" ";
    }
   cout<<endl;
}
else{
    cout<<-1<<endl;
}




}
return 0;
}