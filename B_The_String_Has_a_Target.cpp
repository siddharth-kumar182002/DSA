#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n;
cin>>n;
string s;
cin>>s;
string y=s;
sort(y.begin(),y.end());
//cout<<y[0]<<endl;
int k=0;
int f=0;
for (int i = 0; i < s.size(); i++)
{
    if(s[i]==y[0] && f==1){
        k=max(i,k);
        
    }
    if(s[i]!=y[0]){
        f=1;
    }
}

for (int i = k; i>=1; i--)
{
    swap(s[i],s[i-1]);
}
cout<<s<<endl;

}
return 0;
}