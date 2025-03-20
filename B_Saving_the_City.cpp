#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long a,b;
cin>>a>>b;
string s;
cin>>s;
vector<long long> arr;
for (int i = 0; i < s.size(); i++)
{
    if(s[i]=='1'){
        arr.push_back(i);
    }
}
long long ans=0;
if(arr.size()){
    ans=a;
}
long long k=(a/b);
for (int i = 1; i <arr.size(); i++)
{
    if((arr[i]-arr[i-1]-1)<=k){
          ans=ans+b*((arr[i]-arr[i-1]-1));
    }
    else{
          ans=ans+a;
    }
}
cout<<ans<<endl;

}
return 0;
}