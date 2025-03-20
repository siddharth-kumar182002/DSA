#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
int a1[t],a2[t];
for (int i = 0; i < t ; i++)
{
    cin>>a1[i]>>a2[i];

}
int ans=0;
for (int i = 0; i < t; i++)
{
    ans=ans+count(a2,a2+t,a1[i]);
}

cout<<ans<<endl;



return 0;
}