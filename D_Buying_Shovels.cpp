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
if(n<=k){
    cout<<1<<endl;
    continue;
}

vector<long long> arr;
for (int i = 1; i*i <=(n); i++)
{
    if(n%i==0){
        if(i*i==n){
            arr.push_back(i);
        }
        else{
        arr.push_back(i);
        arr.push_back(n/i);
        }
    }
}
int maxi = -1;
 
    for(int i=0;i<arr.size();i++){
        if(arr[i] <= k && arr[i] > maxi){
            maxi = arr[i];
        }
    }
    cout<<n/maxi<<endl;



}
return 0;
}