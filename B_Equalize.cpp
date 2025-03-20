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
arr.resize(unique(arr.begin(), arr.end()) - arr.begin());
//1 1 4 7
//2 2 5 8----1
long long maxi=0;
long long j=0;
for (int i = 0; i <arr.size(); i++)
{
    
    
    while(arr[i]-arr[j]>=n){
        j++;
    }
   
    maxi=max(maxi,i-j+1);
}
cout<<maxi<<endl;
}
return 0;
}