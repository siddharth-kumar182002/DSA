#include <bits/stdc++.h>
using namespace std;
int main() {

ios_base::sync_with_stdio(0); 
 cin.tie(0);
 freopen("cowqueue.in","r",stdin);
 freopen("cowqueue.out","w",stdout);
int t;
cin>>t;
map<int,int> m;

while(t--){
    int a,b;
    cin>>a>>b;
    m[a]=b;
}
long long ans=0;
for (auto i = m.begin(); i !=m.end(); i++)
    {
        if(ans<=(i->first)){
            ans=(i->first)+(i->second);
        }
        else{
            ans=ans+i->second;
        }
    }

cout<<ans<<endl;
return 0;
}