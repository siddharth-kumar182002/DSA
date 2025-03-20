#include <bits/stdc++.h>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
long long l=0;
long long r=2*1e9;
while(l+1<r){
    long long mid=(l+r)/2;
    if((mid*(mid+1)/2)<=k){
              l=mid;
    }
    else{
           r=mid;
    }
}
long long x=(l*(l+1)/2);
long long y=k-x;
long long end=l-1;
//cout<<"end="<<end<<endl;
//cout<<"y="<<y<<endl;
if(y!=0){
    l++;
    end=y-1;
}
string ans="";
for (int i = 0; i <n; i++)
{
    ans=ans+'a';
}
//cout<<"l="<<l<<endl;
//cout<<"end="<<end<<endl;
//cout<<n-l-1<<endl;
//cout<<n-end-1<<endl;

ans[n-l-1]='b';
ans[n-end-1]='b';

cout<<ans<<endl;

}
return 0;
}