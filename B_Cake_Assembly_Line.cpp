#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n,w,h;
cin>>n>>w>>h;
vector<long long> a(n);
vector<long long> b(n);
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
for (int i = 0; i < n; i++)
{
    cin>>b[i];
}
long long minshift=-1e11;
long long maxshift=1e11;
for (int i = 0; i < n; i++)
{
    minshift=max(minshift,(b[i]+h-w)-(a[i]));
    maxshift=min(maxshift,(b[i]-h+w)-a[i]);
}
if(minshift<=maxshift){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
return 0;
}