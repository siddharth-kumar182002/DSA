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



int max=arr[0];
int min=arr[0];
for (int i = 0; i < n-1; i++)
{
    max=max|arr[i+1];
    min=min&arr[i+1];
}
cout<<max-min<<endl;
}
return 0;
}