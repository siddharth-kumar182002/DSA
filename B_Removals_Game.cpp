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
vector<long long> arr(n);
vector<long long> brr(n);
map<long long,long long> mp;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

for (int i = 0; i <n; i++)
{
    cin>>brr[i];
    mp[brr[i]]=i;
}
long long f=0;
for (int i = 1; i < n; i++)
{
    long long x=arr[i-1];
    long long y=arr[i];
    if(abs(mp[x]-mp[y])>1){
        f=1;
        break;
    }
}

if(f==1){
    cout<<"Alice"<<endl;
}
else{
    cout<<"Bob"<<endl;
}



}
return 0;
}