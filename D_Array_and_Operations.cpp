#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
vector<long long> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
//1 1 1 1 1 2 3
sort(arr.begin(),arr.end());
long long ans=0;
for (int i = 0; i <n-2*k; i++)
{
    //cout<<"hi"<<endl;
    ans=ans+arr[i];
}

for (int i =n-2*k; i < n-k; i++)
{
    //cout<<"ind="<<i+k<<endl;
    //cout<<"inds="<<i<<endl;
    ans=ans+((arr[i])/(arr[i+k]));
}

cout<<ans<<endl;

}
return 0;
}