#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
string s;
cin>>s;
int count=0;
int a,b;
int l=s.size();

for (int i = 0; i < l; i++)
{
    if((s[i]-'0')!=0){
        count++;
    }
}
cout<<count<<endl;

for (int i = 0; i < l; i++)
{
    int f=(s[i]-'0');
    if(f>0){
        cout<<f*pow(10,(l-i-1))<<" ";

    }
}

cout<<endl;

}
return 0;
}