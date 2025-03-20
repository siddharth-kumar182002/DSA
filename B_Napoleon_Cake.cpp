#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
  cin>>n;
  vector<long long>v,vc;
  vc.assign(n,0);
  for(int i=0;i<n;i++)
  {
     long long a;
     cin>>a;
     v.push_back(a);
  }
  long long mx=v[n-1];
  for(int i=n-1;i>=0;i--)
  {
    mx=max(mx,v[i]);
    if(mx>0)vc[i]=1;
    mx--;
  }
  for(int i=0;i<vc.size();i++)
  {
    cout<<vc[i]<<" ";
  }
  cout<<endl;

}
return 0;
}