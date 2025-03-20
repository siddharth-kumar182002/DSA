#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n,x;
    cin>>n>>x;

    vector<long long> p(n+1);
    for (int i = 0; i < n; i++)
    {

        long long y;
        cin>>y;
        p[i+1]=(p[i]+y);
    }
    map<long long,long long> m;
    long long ans=0;
    m[0]=1;
    for (int i = 1; i <=n; i++)
    {
        ans=ans+m[p[i]-x];
        m[p[i]]++;
    }
    
    cout<<ans<<endl;
return 0;
}
