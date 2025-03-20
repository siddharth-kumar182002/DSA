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
//vector<long long> arr(n);
map<long long,long long> mp;
long long ans=0;
long long sum=0;
for (int i = 0; i < n; i++)
{
    long long x;
    cin>>x;
    sum=sum+x;
    mp[x]++;
    if(sum%2==0){
        long long y=sum/2;
        if(mp[y]>0){
            ans++;
        }
    }
}

cout<<ans<<endl;


}
return 0;
}