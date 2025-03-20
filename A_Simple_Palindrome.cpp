#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<char> arr(5);
arr[0]='a';
arr[1]='e';
arr[2]='i';
arr[3]='o';
arr[4]='u';
long long x=n/5;
long long y=n%5;
string ans="";
if(n<5){
    for (int i = 0; i < n; i++)
    {
        ans=ans+arr[i];
    }
    cout<<ans<<endl;
    continue;
}
for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < x; j++)
    {
        ans=ans+arr[i];
    }
    if(y>0){
        ans=ans+arr[i];
        y--;
    }
    
}


cout<<ans<<endl;



}
return 0;
}