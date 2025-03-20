#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,m,k;
cin>>n>>m>>k;
vector<long long> arr(n);
vector<long long> brr(m);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
map<long long ,long long> mp2; 
for (int i = 0; i < m; i++)
{
    cin>>brr[i];
    mp2[brr[i]]++;
}

map<long long,long long> mp1;
long long count=0;
long long ans=0;
for (int i = 0; i < m; i++)
{
    if(mp2[arr[i]]>0 && mp1[arr[i]]<mp2[arr[i]]){
        count++; 
    }
    
    mp1[arr[i]]++;
}
if(count>=k){
    ans++;
}

long long l=0;
for (int i = m; i <n; i++)
{
    if(mp2[arr[l]]>0 && mp1[arr[l]]<=mp2[arr[l]] ){
        count--;
    }
mp1[arr[l]]--;
l++;
    if(mp2[arr[i]]>0 && mp1[arr[i]]<mp2[arr[i]]){
        count++;
    }
    mp1[arr[i]]++;
    // cout<<"l="<<l<<endl;
    // cout<<"i="<<i<<endl;
    // cout<<count<<endl;
    if(count>=k){
        ans++;
    }
}

cout<<ans<<endl;


}
return 0;
}