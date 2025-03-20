#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,s,m;
cin>>n>>s>>m;
vector<pair<long long,long long>> arr(n+1);

for (int i = 0; i < n; i++)
{
    long long x,y;
    cin>>x>>y;
    arr[i]={x,y};
}
arr[n]={m,1e4};

long long l=0;
long long f=0;
for (int i = 0; i <=n; i++)
{
    long long x=arr[i].first;
    long long y=arr[i].second;
    if((x-l)>=s){
          f=1;
          break;
    }
    else{
        l=y;
    }
}
if(f==1){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}







}
return 0;
}