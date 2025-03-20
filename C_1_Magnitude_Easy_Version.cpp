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
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

vector<long long> maxi(n+1,LONG_LONG_MIN);
vector<long long> mini(n+1,LONG_LONG_MAX);
maxi[0]=0;
mini[0]=0;
for (int i = 1; i <=n; i++)
{
    maxi[i]=max({maxi[i],abs(maxi[i-1]+arr[i-1]),abs(mini[i-1]+arr[i-1])});
    mini[i]=min({mini[i],(mini[i-1]+arr[i-1]),(maxi[i-1]+arr[i-1])});
}

cout<<maxi[n]<<endl;

}
return 0;
}