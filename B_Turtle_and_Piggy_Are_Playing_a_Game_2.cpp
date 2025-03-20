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
long long l=0;
long long r=n-1;

long long x=0;
while(l!=r){
    if(x==0){
        l++;
        x=1;
    }
    else{
        r--;
        x=0;
    }
}
cout<<arr[l]<<endl;
}
return 0;
}