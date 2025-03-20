#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long a,b,c;
cin>>a>>b>>c;
long long ans=1e9;
for (int i = 1; i <=12; i++)
{
    long long dist=abs(a-i)+abs(b-i)+abs(c-i);
    ans=min(ans,dist);
}
cout<<ans<<endl;

}
return 0;
}