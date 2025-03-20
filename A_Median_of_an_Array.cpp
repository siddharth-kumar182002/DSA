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
sort(arr.begin(),arr.end());

long long ind=(n+1)/2;
ind--;
long long ans=0;
for (int i = ind; i <n; i++)
{
    if(arr[i]==arr[ind]){
        ans++;
    }
}

cout<<ans<<endl;

}
return 0;
}