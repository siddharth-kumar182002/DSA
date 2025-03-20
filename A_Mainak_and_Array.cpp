#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

int cmax = (arr[n-1]-arr[0]);
 for (int i = 0; i < n-1; i++)
 {
    cmax=max(cmax,arr[i]-arr[i+1]);
 }
 for (int i = 1; i < n; i++)
 {
    cmax=max(cmax,arr[i]-arr[0]);

 }
 for (int i = n-1; i>=0; i--)
 {
    cmax=max(cmax,arr[n-1]-arr[i]);
 }
 

 cout<<cmax<<endl;
 
 


}
return 0;
}