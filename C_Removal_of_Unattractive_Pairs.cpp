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
string s;
cin>>s;
vector<long long> arr(26);
long long f=-1;
for (int i = 0; i < n; i++)
{
    arr[s[i]-'a']++;
      f=max(f,arr[s[i]-'a']);
}
cout<<max(2*f-n,n%2)<<endl;
}
return 0;
}