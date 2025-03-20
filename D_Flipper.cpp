#include <bits/stdc++.h>
using namespace std;
int main() {
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

long long r=0;
for (int i = 0; i < n-1; i++)
{
    if(arr[r+1]<=arr[i+1]){
        r=i;
    }
}
if(arr[r+1]==arr[n-1]){
    r=n-1;
}

vector<long long> ans;
for (int i = r+1; i < n; i++)
{
    ans.push_back(arr[i]);
}

ans.push_back(arr[r]);
for (int i = r-1; i >=0; i--)
{
    if(arr[i]>arr[0]){
        ans.push_back(arr[i]);
    }
    else{
        for (int j=0;j<=i; j++)
        {
            ans.push_back(arr[j]);
        }
        break;
    }
}
for(auto x:ans){
    cout<<x<<" ";
}
cout<<endl;
}
return 0;
}