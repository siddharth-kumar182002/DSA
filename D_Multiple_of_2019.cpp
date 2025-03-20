#include <bits/stdc++.h>
using namespace std;
int main() {
string s;
cin>>s;
long long n=s.size();
vector<long long> arr(n+1);
for (int i = 1; i <=n; i++)
{
    arr[i]=s[i-1]-'0';
}
for (int i = 0; i < n; i++)
{
    arr[i+1]=(arr[i]+arr[i+1]);
}
vector<long long > v1;
for (int i = 0; i < n; i++)
{
    v1[i]=(arr[i])%3;
}

for(auto &x:arr){
    cout<<x<<" ";
}
map<long long,long long> m;
map<long long ,long long> m2;
for (int i = 1; i <=n; i++)
{
    if(v1[arr[i]]==v1[i]){

    }
    m[arr[i]]++;
}





return 0;
}