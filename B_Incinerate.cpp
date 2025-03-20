#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
    long long n,k;
    cin>>n>>k;
  vector<int> h(n);
  for(auto &x:h){
    cin>>x;

  }  
vector<int> p(n);
for(auto &x:p){
  cin>>x;
} 

vector<pair<int,int>> m;
for (int i = 0; i < n; i++)
{
    m.push_back({p[i],h[i]});

}
sort(m.begin(),m.end());
long long td=k;
long long cnt=0;
for (int i = 0; i < n; i++)
{
    while(m[i].second>td && k>=0){
        k=k-m[i].first;
        td=td+k;
    }
     if(k<=0){
       break;
 }
    cnt++;
}
if(cnt==n){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}



}
return 0;
}