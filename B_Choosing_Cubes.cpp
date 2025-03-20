#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,f,k;
cin>>n>>f>>k;
vector<long long> arr(n);

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

long long x=arr[f-1];

sort(arr.rbegin(),arr.rend());

if(arr[k-1]>x){
    cout<<"NO"<<endl;
    continue;
}
if(arr[k-1]<x){
    cout<<"YES"<<endl;
    continue;
}

if(k<n && arr[k-1]==x && arr[k]==x){
    cout<<"MAYBE"<<endl;
    continue;
}

cout<<"YES"<<endl;



}
return 0;
}