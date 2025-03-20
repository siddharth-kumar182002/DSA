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
long long ans=a;
ans=ans+((b)/3);
long long x=b%3;
if(x==1){
if(c<2){
cout<<-1<<endl;
continue;
}
}
else if(x==2){
if(c<1){
    cout<<-1<<endl;
    continue;
}
}

ans=ans+(x+c)/3;
if((x+c)%3!=0){
    ans++;
}
cout<<ans<<endl;
}
return 0;
}