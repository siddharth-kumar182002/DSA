#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n;
cin>>n;
vector<long long> arr(10,1);
long long x=1;
while(x<n){

for (int i = 9; i >=0; i--)
{
    x=x/arr[i];
    arr[i]++;
    x=x*arr[i];
    if(x>=n){
        break;
    }
}
}
string s="codeforces";
string ans="";
for (int i = 0; i <10; i++)
{
    for (int j = 0; j < arr[i]; j++)
    {
        ans+=s[i];
    }
    
}
cout<<ans<<endl;




return 0;
}