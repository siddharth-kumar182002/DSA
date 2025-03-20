#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin>>n;

    vector<long long> p(n+1);
    for (int i = 0; i < n; i++)
    {

        long long y;
        cin>>y;
        p[i+1]=((p[i]+y)%n+n)%n;
    }
//cout<<p[3]<<endl;
    map<long long,long long> m;
    m[0]=1;
    long long ans=0;
    
    for (int i = 1; i <=n; i++)
    {
        ans=ans+m[p[i]];
        m[p[i]]++;
    }
    
    cout<<ans<<endl;
return 0;
}
