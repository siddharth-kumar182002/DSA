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
vector<long long> ans1;
set<long long> st;
for (int i = 0; i < n; i++)
{
    long long x;
    cin>>x;
    auto it=lower_bound(ans1.begin(),ans1.end(),x);
    if(it==ans1.end()){
        ans1.push_back(x);
    }
    else{
        *it=x;
    }
    if(ans1.size()>=2){
        st.insert(ans1[1]);
    }
   /* for(auto x: ans1){
        cout<<x<<" ";
    }
    cout<<endl;*/
}

cout<<st.size()<<endl;

}
return 0;
}