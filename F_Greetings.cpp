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
vector<pair<long long,long long>> arr(n);

for (int i = 0; i < n; i++)
{
    long long a,b;
    cin>>a>>b;
    arr[i]={a,b};
}

sort(arr.begin(),arr.end());
vector<long long> count(n,0);

set<long long> st;

for (int i = 0; i < n; i++)
{
    st.insert(arr[i].second);
    cout<<"srr="<<arr[i].second<<endl;
    cout<<"arr.firt="<<arr[i].first<<endl;
    auto it=st.lower_bound(arr[i].first);
    
        auto ind=distance(st.begin(),it);
           cout<<ind<<endl;
    
}

 
}
return 0;
}