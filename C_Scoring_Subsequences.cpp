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
vector<long long> ans;
for (int k = 0; k < n; k++)
{
    

long long lo=0;
long long hi=k;
long long mid;
//fftttt
while(hi-lo>1){
    mid=(hi+lo)/2;
if(arr[mid]>=(k-mid+1)){
hi=mid;
}
else{
    lo=mid+1;
}
}
//cout<<"k="<<k<<endl;
//cout<<"lo="<<lo<<endl;
//cout<<"hi"<<hi<<endl;
if(arr[lo]>=(k-lo+1)){
ans.push_back(k-lo+1);
}
else if(arr[hi]>=(k-hi+1)){
ans.push_back(k-hi+1);
}
else{
    ans.push_back(0);
}

}

for(auto x:ans){
    cout<<x<<" ";
}
cout<<endl;

}
return 0;
}