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

long long maxi=*max_element(arr.begin(),arr.end());
long long sum=0;
sum=accumulate(arr.begin(),arr.end(),sum);
if(sum==0){
    cout<<0<<endl;
    continue;
}
if(2*maxi<=sum){
cout<<1<<endl;
}
else{
    cout<<2*maxi-sum<<endl;
}
}
return 0;
}