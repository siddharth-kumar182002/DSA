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
for (int i = n-k; i >=1; i--)
{
    cout<<i<<" ";
}
for (int i = n-k+1; i <=n; i++)
{
    cout<<i<<" ";
}
cout<<endl;
}
return 0;
}