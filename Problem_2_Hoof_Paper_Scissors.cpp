#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("hps.in", "r", stdin);
long long n;
cin>>n;
vector<long long > p(n+1);
vector<long long > h(n+1);
vector<long long > s(n+1);

for (int i = 0; i < n; i++)
{
    char x;
    cin>>x;
    p[i+1]=p[i];
    h[i+1]=h[i];
     s[i+1]=s[i];

     if(x=='P'){
           p[i+1]++;
     }
     else if( x=='H'){
        h[i+1]++;
     }
     else{
        s[i+1]++;
     }
}
long long ans=0;
for (int i = 1; i <=n; i++)
{
    long long b=max(p[i],max(h[i],s[i]));
    long long a=max(p[n]-p[i],max(h[n]-h[i],s[n]-s[i]));

    ans=max(ans,a+b);
}
	freopen("hps.out", "w", stdout);
cout<<ans<<endl;


return 0;
}