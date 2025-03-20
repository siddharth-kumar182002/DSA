#include <bits/stdc++.h>
using namespace std;
int main() {
int n,k;
cin>>n>>k;
vector<int> arr(n);


for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}


partial_sum(arr.begin(),arr.end(),arr.begin());
int mini=arr[k-1];
int j=0;
int ans=1;
for (int i = k; i < n; i++)
{
    int temp=mini;
    mini=min(mini,arr[i]-arr[j]);
    if(temp!=mini){
        ans=j+2;
    }
    j++;
}

cout<<ans<<endl;


return 0;
}