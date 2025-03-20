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
vector<set<long long>> g(n+1);
for (int i = 2; i <=n; i++)
{
     cout<< "? "<<1<<" "<<i<<endl;
     cout<<flush;
     long long x;
     cin>>x;
     long long a,b;
     a=1;
     b=i;
     while(x!=i){
         a=i;
         b=x;
        cout<< "? "<<i<<" "<<x<<endl;
        cout<<flush;
         cin>>x;
         
     }
     if(x==i){
         g[a].insert(b);
        //1g[b].insert(a);
     } 

}

set<pair<long long,long long>> st;
for (int i = 1; i <=n; i++)
{
    for(auto x:g[i]){
       // cout<<"i="<<i<<" "<<x<<endl;
        st.insert({i,x});
    }
}

cout<<"! ";
for(auto x:st){
    cout<<x.second<<" "<<x.first<<" ";
}
cout<<endl;
cout<<flush;
}
return 0;
}