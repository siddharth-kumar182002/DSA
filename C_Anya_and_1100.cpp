#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
string s;
cin>>s;
long long q;
cin>>q;
set<long long> st;
long long n=s.size();
//cout<<n<<endl;
for (int i = 0; i <=n-4; i++)
{
    if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='0' && s[i+3]=='0'){
                 st.insert(i);
    }
}
//cout<<"hi"<<endl;
//cout<<st.size()<<endl;
while(q--){
    long long i;
    char v;
    cin>>i>>v;
    i--;
    s[i]=v;
   // cout<<"S="<<s<<endl;
    for(int j=max(0*1LL,i-3);j<=min(n-4,i+3);j++){
        st.erase(j);
        if(s[j]=='1' && s[j+1]=='1' && s[j+2]=='0' && s[j+3]=='0'){
                 st.insert(j);
             }
    }
   // cout<<st.size()<<endl;
    if(st.size()>0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
}
}
return 0;
}