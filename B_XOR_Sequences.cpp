#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long x,y;
cin>>x>>y;

//cout<<(x^y)<<endl;
long long temp=x^y;
long long count=0;
long long j=0;
for (int i = 0; i < 32; i++)
{
    if((temp&(1<<i))==0){
        count++;
    }
    else{
        break;
    }
}
long long ans=(1<<count);
cout<<ans<<endl;
}
return 0;
}