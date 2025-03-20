#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,w;
cin>>n>>w;

vector<pair<long long,long long>> mp;
for (int i = 0; i < n; i++)
{
    long long x;
    cin>>x;
    mp.push_back({x,(i+1)});
}

long long mincap=(w+1)/2;
vector<pair<long long,long long>> crr;
long long f=0;
for (int i = 0; i < n; i++)
{
    if(mp[i].first>w){
        continue;
    }
    else if(mp[i].first<=w && mp[i].first>=mincap){
        cout<<1<<endl;
        cout<<mp[i].second<<endl;
        f=1;
      break;
    }
    else{
       // cout<<mp[i].first<<endl;
        crr.push_back(mp[i]);
    }
}
sort(crr.begin(),crr.end());
if(f==1){
    continue;
}
//cout<<"hi"<<endl;
long long sum=0;
vector<long long> ans;
long long i=0;
while(sum<mincap && i<crr.size()){
    ans.push_back(crr[i].second);
sum=sum+crr[i].first;
i++;
}

if(sum>=mincap){
    cout<<ans.size()<<" "<<endl;;
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