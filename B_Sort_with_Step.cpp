#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
vector<long long> a(n+1);
for (int i = 1; i <=n; i++)
{
    cin>>a[i];
}

vector<long long> c(n+1);
int cnt=0;
vector<int> v;
for (int i = 1; i <=n; i++)
{
    c[i]=abs(a[i]-i);
    if((c[i]%k)!=0){
        cnt++;
        v.push_back(i);
    }
   // cout<<c[i]<<endl;
}
//cout<<cnt<<endl;
if(cnt==0){
    cout<<0<<endl;
}
else if (cnt==2){
   cout<<1<<endl;
}
else{
    cout<<-1<<endl;
}




}
return 0;
}