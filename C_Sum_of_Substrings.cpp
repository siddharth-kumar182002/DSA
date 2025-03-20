#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,m;
cin>>n>>m;
string s;
cin>>s;
set<long long> arr;
for (int i = 0; i < m; i++)
{
    long long x;
    cin>>x;
    arr.insert(x);
}
string c;
cin>>c;

sort(c.begin(),c.end());
long long j=0;
for(auto x:arr){
    s[x-1]=c[j];
    j++;
}
cout<<s<<endl;
}
return 0;
}