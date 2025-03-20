#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,q;
cin>>n>>q; 
vector<long long> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

if(n==1){
    cout<<arr[0]<<endl;
}
else{

long long maxi=0;
long long mini=0;
if(n>1 && arr[0]>arr[1]){
maxi+=arr[0];
}
if(n>1 && arr[n-1]>arr[n-2]){
maxi+=arr[n-1];
}
for (int i =1; i<n-1; i++)
{
    if((arr[i]>arr[i+1]) && (arr[i]>arr[i-1])){
                  maxi+=arr[i];
        }

    if((arr[i]<arr[i+1]) && (arr[i]<arr[i-1])){
        mini+=arr[i];
    }
}

cout<<(maxi-mini)<<endl;
}

}
return 0;
}