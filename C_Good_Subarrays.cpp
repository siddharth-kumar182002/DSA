#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
string s;
cin>>s;
vector<long long> arr(n+1);
for (int i = 1; i <=n; i++)
{
   arr[i]=s[i-1]-'0';
}
for (int i = 0; i < n; i++)
{
    arr[i+1]=arr[i+1]+arr[i];
}

/*for(auto &x:arr){
    cout<<x<<" ";
}
cout<<endl;*/
map<long long ,long long> m;
long long ans=0;
for (int i = 0; i <=n; i++)
{
    m[arr[i]-i]++;
}
for(auto &x:m){
  ans=ans+((x.second)*(x.second-1))/2;
}
cout<<ans<<endl;
}
return 0;
}