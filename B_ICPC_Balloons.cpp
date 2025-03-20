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
vector<long long> arr(26,0);
long long ans=0;
for (int i = 0; i <n; i++)
{
    if(arr[s[i]-'A']){
         ans++;
    }
    else{
        ans+=2;
        arr[s[i]-'A']++;
    }
}
cout<<ans<<endl;
}
return 0;
}