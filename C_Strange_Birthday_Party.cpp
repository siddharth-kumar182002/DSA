#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
//2 2 3 3 4 
// 5 5  12 5  3

long long n,m;
cin>>n>>m;
vector<long long> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
vector<long long> brr(m);
for (int i = 0; i < m; i++)
{
    cin>>brr[i];
}

sort(arr.rbegin(),arr.rend());
long long ans=0;
long long last=0;
for (int i = 0; i <arr.size(); i++)
{
    if(last<brr.size() && brr[last]<=brr[arr[i]-1]){
          ans=ans+brr[last];
          last++;
    }
    else{
        ans=ans+brr[arr[i]-1];
    }
}
cout<<ans<<endl;

}
return 0;
}