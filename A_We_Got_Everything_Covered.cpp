#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;

string s="";
for (int i = 0; i <k; i++)
{
    s+=('a'+i);
}
string x=s;
for (int i = 1; i <n; i++)
{
    s+=x;
}
cout<<s<<endl;

}
return 0;
}