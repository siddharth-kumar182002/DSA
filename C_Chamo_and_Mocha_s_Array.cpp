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
long long maxi=-1;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
   
}
for (int i = 0; i <n-1; i++)
{
    if(i+1<n){
        maxi=max(maxi,min(arr[i],arr[i+1]));
    }
        if(i+2<n){
            long long brr[3]={arr[i],arr[i+1],arr[i+2]};
            sort(brr,brr+3);
        maxi=max(maxi,brr[1]);
        }
    
}

cout<<maxi<<endl;
}
return 0;
}