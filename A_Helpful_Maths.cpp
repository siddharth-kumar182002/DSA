#include <bits/stdc++.h>
using namespace std;
int main() {
string s;
cin>>s;
int l=s.size();
vector<char> v(l);
 v.push_back(s);
for (int i = 0; i < s.size(); i++)
{
    v.push_back('s');
}
cout<<v[0];
/*sort(v.begin(),v.end());
for (int i = 0; i < s.size(); i++)
{
    cout<<v[i]<<"+";
}*/


return 0;
}