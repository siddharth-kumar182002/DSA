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
long long n=s.size();
vector<long long> left(n+1,0);
for (int i = 1; i <=n; i++)
{
    left[i]=left[i-1];
    if(s[i-1]=='1'){
        left[i]++;
    }
}
long long ans=n;
for (int i = 1; i <=n; i++)
{
    //000011111
    long long moves1=left[i];
    long long moves2=(n-i)-(left[n]-left[i]);
    ans=min(ans,moves1+moves2);
    //11110000
    long long moves3=i-left[i];
    long long moves4=left[n]-left[i];
    ans=min(ans,moves3+moves4);
}
cout<<ans<<endl;




}
return 0;
}