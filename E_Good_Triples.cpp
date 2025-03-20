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
vector<long long > count(30,0);
for (int i = 0; i <=9; i++)
{
   for (int j = 0; j <=9; j++)
   {
   for (int k = 0; k <=9; k++)
   {
       count[i+j+k]++;
   }
   
   }
   
}
long long ans=1;
for (int i = 0; i <s.size(); i++)
{
    ans*=count[s[i]-'0'];
}
cout<<ans<<endl;

}
return 0;
}