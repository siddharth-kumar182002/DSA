#include <bits/stdc++.h>
using namespace std;

map<char,long long> m;
long long num=0;
void add( char x){
m[x]++;
if(m[x]==1){
    num++;
}
}
void remove(char x){
    m[x]--;
    if(m[x]==0){
        num--;
    }
}
bool good(char x){
    return num>=x;
}
int main() {
long long n;
cin>>n;
string s;
cin>>s;
set<char> se;
for (int i = 0; i <s.size(); i++)
{
    se.insert(s[i]);
}
long long k= se.size();
//cout<<"k="<<k<<endl;
long long l=0;
long long ans=n;

for (int r = 0; r < n; r++)
{
    add(s[r]);
    while(good(k)){
        remove(s[l]);
        l++;
    }
    //cout<<"l="<<l<<" "<<"r="<<r<<endl;
    if(l>0){
        ans=min(ans,r-l+2);
    }
}
cout<<ans<<endl;
return 0;
}