#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);

string s;
cin>>s;
long long n=s.size();
vector<long long> arr;
for (int i = 0; i < n; i++)
{
    //cout<<(s[i]-'A')<<endl;
    arr.push_back((s[i]-'A'));
}
for (int i = 2; i <arr.size(); i++)
{
    if(arr[i]!=((arr[i-1]+arr[i-2])%26)){
           cout<<"NO"<<endl;
           return 0;
    }
}
cout<<"YES"<<endl;

return 0;
}