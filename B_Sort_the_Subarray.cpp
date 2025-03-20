#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long> a(n+1);
vector<long long> b(n+1);
for (int i = 1; i <=n; i++)
{
    cin>>a[i];
}
for (int i = 1; i <=n; i++)
{
    cin>>b[i];
}
long long l;
long long r;
int ini=0;
for (int i = 1; i <=n; i++)
{
    if(a[i]!=b[i] && ini==0){
        l=i;
        r=i;
        ini=1;
    }
    if(a[i]!=b[i]){
        r=i;
    }
}

//cout<<l<<" "<<r<<endl;

for (int i = l-1; i >=1; i--)
{
    if(b[i]<=b[i+1]){
        l--;
    }
    else{
        break;
    }
}
int o=0;
for (int i = r+1; i<=n; i++)
{
    if(b[i]>=b[i-1]){
        r++;
        o=1;
    }
    else{
        break;
    }
    //cout<<b[i]<<" "<<b[i-1]<<endl;
    //cout<<r<<endl;
}
cout<<l<<" "<<r<<endl;

}
return 0;
}