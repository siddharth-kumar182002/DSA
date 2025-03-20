#include <bits/stdc++.h>
using namespace std;

bool f(long long mid,vector<long long> &arr,long long sum){
long long n=arr.size();
long long tot=(mid+sum);
long long count=0;
//cout<<"tot="<<tot<<endl;
for (int i = 0; i <(arr.size()-1); i++)
{
    if((2*n*arr[i])<tot){
        count++;
    }
}
//cout<<count<<endl;
if(n%2==0){
if(count>n/2){
    return true;
}
else{
    return false;
}
}
else{
if(count>=(n+1)/2){
    return true;
}
else{
    return false;
}
}


}
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
long long sum=0;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    sum=sum+arr[i];
}
sort(arr.begin(),arr.end());
long long maxi=arr[n-1];
long long lo=-1;
long long hi=1e12;
//cout<<f(25,arr,sum)<<endl;
while(lo+1<hi){
    long long mid=(lo+hi)/2;

if(f(mid,arr,sum)){
hi=mid;
}
else{
lo=mid;
}
    
}
if(hi==1e12){
    cout<<-1<<endl;
}
else{
cout<<hi<<endl;
}
}
return 0;
}