#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);

long long n,m;
cin>>n>>m;
long long x=min(n,m);
cout<<x+1<<endl;
for (int i = 0; i <=x; i++)
{
    cout<<i<<" "<<x-i<<endl;
}

return 0;
}