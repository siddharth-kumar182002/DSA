#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
string s;
cin>>s;
vector<long long> v;
long long tot=0;
for (int i = 0; i < n; i++)
{
    if(s[i]=='L'){
        v.push_back((n-i-1)-i);
         tot=tot+i;

    }
    else{
 v.push_back(i-(n-i-1));
  tot=tot+(n-i-1);
    }
}
sort(v.begin(),v.end());

for (int i=n-1; i>=0; i--)
{
    if(v[i]>0){
        tot=tot+v[i];
    }
    cout<<tot<<" ";
}
cout<<endl;

}
return 0;
}