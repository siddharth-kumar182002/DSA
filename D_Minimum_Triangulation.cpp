#include <bits/stdc++.h>
using namespace std;
int main() {
long long n;
cin>>n;
long long ans=0;
for (int i = 2; i <n; i++)
{
    ans=ans+i*(i+1);
}
cout<<ans<<endl;
return 0;
}