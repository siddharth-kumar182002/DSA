#include <bits/stdc++.h>
using namespace std;
long long f(long long n,long long k){
    if(n%(k+1)==0){
        return (n/(k+1));
    }
    else{
        return ((n/(k+1))+1);
    }
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
string s;
cin>>s;
vector<long long> arr;

arr.push_back(0-k-1);
for (int i = 0; i < n; i++)
{
    if(s[i]=='1'){
         arr.push_back(i);
    }
}
arr.push_back(n+k);
long long ans=0;
for (int i = 0; i+1< arr.size(); i++)
{
    long long x=(arr[i+1]-arr[i]-1-2*k);
    if(x>0){
         ans=ans+f(x,k);
    }
}
cout<<ans<<endl;


}
return 0;
}