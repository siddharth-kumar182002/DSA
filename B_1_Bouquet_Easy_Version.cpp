#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,m;
cin>>n>>m;
vector<long long> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

sort(arr.rbegin(),arr.rend());
// for(auto x:arr){
//     cout<<x<<" ";
// }
// cout<<endl;
multiset<long long> st;
long long l=0;
long long r=0;
long long sum=0;
long long ans=0;
while(r<n){
    st.insert(arr[r]);
    sum=sum+arr[r];
    //cout<<"l="<<l<<endl;
    //cout<<"r="<<r<<endl;
    auto it=st.begin();
    long long mini=*(it);
    auto it2=st.end();
             it2--;
    long long maxi=*(it2);
    
   // cout<<"maxi"<<maxi<<endl;
    // cout<<"mini"<<mini<<endl;
    // for(auto x:st){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    while(l<r && (((maxi-mini)!=1 && (maxi-mini)!=0) || sum>m)){
        //cout<<"in="<<maxi-mini<<endl;
        sum=sum-arr[l];
        st.erase(st.find(arr[l]));
        l++;
        auto it1=st.begin();
           mini=*(it1);
        auto it3=st.end();
        it3--;
         maxi=*(it3);
    }
     if(((maxi-mini)==0 || (maxi-mini)==1) && sum<=m ){
          ans=max(ans,sum);
          
    }
    r++;
}
cout<<ans<<endl;
}
return 0;
}