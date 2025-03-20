#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long> arr;
for (int i = 0; i < n; i++)
{
     long long a;
     cin>>a;
     if(a%2==0){
        arr.push_back(0);
     }
     else{
        arr.push_back(1);
     }
}
vector<pair<long long,long long> > ans;
long long k=0;
for (int i = 1; i < n; i++)
{
if(arr[i]!=arr[0]){
    if(k==0 && (i+1)!=n){
  ans.push_back({i+1,n});
  arr[n-1]=!arr[0];
  k++;
    }
    ans.push_back({1,i+1});
}
}

for (int i = 0; i < n-1; i++)
{
    if(i==0 && k==0){
        ans.push_back({1,n});
    }
    if(i>0 && arr[i]==arr[0]){
        ans.push_back({i+1,n});
    }
}

cout<<ans.size()<<endl;
for(auto x:ans){
    cout<<x.first<<" "<<x.second<<endl;
    }

}
return 0;
}