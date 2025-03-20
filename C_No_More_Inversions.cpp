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
vector<long long> arr(k);
for (int i = 1; i <=k; i++)
{
    arr[i-1]=i;
}

if(n==k){
    for (int i = 0; i<k; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
else{
    long long d=n-k;
    auto it=arr.begin()+k-d-1;
    reverse(it,arr.end());
    for (int i = 0; i<k; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
}
return 0;
}