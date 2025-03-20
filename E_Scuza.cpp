#include <bits/stdc++.h>
using namespace std;
int main() {
long long t;
cin>>t;
while(t--){
long long n,q;
cin>>n>>q;
vector<long long> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
vector<long long> qrr(q);
for (int i = 0; i < q; i++)
{
    cin>>qrr[i];
}
map<long long,long long> ans;
ans[0]=0;
long long k=-1;
long long c=0;
for (int i = 0; i < n; i++)
{
    c=c+arr[i];
    k=max(k,arr[i]);
    ans[k]=c;
    }

    /*for(auto &x:ans){
        cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<endl;*/
for (int i = 0; i < q; i++)
{
    auto it =ans.lower_bound(qrr[i]);
  //cout<<(*it).first<<"in"<<" ";
  if(it==ans.end()){
        it--;
     cout<<((*it).second)<<" ";
     continue;
  }
    if((*it).first==qrr[i]){
        cout<<(*it).second<<" ";
    }
    else{
        it--;
        cout<<((*it).second)<<" ";
    }

}
cout<<endl;





}
return 0;
}