#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
int ans=0;
for (int i = 1; i < t; i++)
{
    if((t-i)%i==0){
        ans++;
    }
    
}
cout<<ans<<endl;

return 0;
}