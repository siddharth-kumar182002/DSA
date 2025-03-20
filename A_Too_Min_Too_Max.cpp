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
vector<long long > arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
sort(arr.begin(),arr.end());

long long ans=abs(arr[0]-arr[n-1])+abs(arr[n-1]-arr[1])+abs(arr[1]-arr[n-2])+abs(arr[n-2]-arr[0]);
cout<<ans<<endl;

}
return 0;
}