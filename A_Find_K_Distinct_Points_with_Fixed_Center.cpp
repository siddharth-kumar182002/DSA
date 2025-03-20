#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long x,y,k;
cin>>x>>y>>k;
long long m=k*x;
long long n=k*y;

for (int i = 1; i <=k-1; i++)
{
   cout<<1<<" "<<(-1*i)<<endl;
}
long long q=(k*(k-1))/2;
cout<<(m-(k-1))<<" "<<(n+q)<<endl;
}
return 0;
}