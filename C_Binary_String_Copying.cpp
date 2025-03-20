#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n,m;
cin>>n>>m;
string s;
cin>>s;
vector<long long> nzero(n),none(n);
nzero[0]=-1;
for (int i = 0; i < n; i++)
{
    if(i-1>=0){
    nzero[i]=nzero[i-1];
    }
    if(s[i]=='0'){
        nzero[i]=i;
    }
}

none[n-1]=n;
for (int i = n-1; i >=0 ; i--)
{
    if(i+1<n){
    none[i]=none[i+1];
    }
    if(s[i]=='1'){
        none[i]=i;
    }
}
set<pair<long long ,long long >> st;
while(m--){
    long long a,b;
    cin>>a>>b;

    long long l1=none[a-1];
    long long r0=nzero[b-1];
    if(l1>r0){
st.insert({-1,-1});
    }
    else{
        st.insert({l1,r0});
    }
}
cout<<st.size()<<endl;
}
return 0;
}