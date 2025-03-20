#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n;
cin>>n;
vector<long long> arr(n);
vector<long long> brr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
for (int i = 0; i < n; i++)
{
    cin>>brr[i];
}

//d*a+b

map<pair<long long,long long>,long long> mp;
long long maxi=0;
long long count=0;
for (int i = 0; i < n; i++)
{
    if(arr[i]!=0){
        long long x=__gcd(arr[i],brr[i]);
        long long y=(-brr[i])/x;
        long long z=(arr[i])/x;
        mp[{y,z}]++;
            maxi=max(maxi,mp[{y,z}]);
        
    }
    else{
        if(brr[i]==0){
            count++;
        }
    }
}
cout<<(maxi+count)<<endl;


return 0;
}