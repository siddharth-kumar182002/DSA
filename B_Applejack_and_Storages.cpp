#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n;
cin>>n; 

map<long long,long long> mp;
for (int i = 0; i < n; i++)
{
    long long x;
    cin>>x;
    mp[x]++;
}
long long sq=0;
long long rec=0;
for(auto x:mp){
    sq+=((x.second)/4);
    rec+=((x.second)/2);
}

long long q;
cin>>q;
while(q--){
    char s;
    cin>>s;
    long long x;
    cin>>x;

    if(s=='+'){
        sq-=((mp[x])/4);
        rec-=((mp[x])/2);
         mp[x]++;
         sq+=((mp[x])/4);
        rec+=((mp[x])/2);
    }
    else{
        sq-=((mp[x])/4);
        rec-=((mp[x])/2);
        mp[x]--;
        sq+=((mp[x])/4);
        rec+=((mp[x])/2);
    }
  if(sq>=1 && rec>=4){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;   
  } 

}

return 0;
}