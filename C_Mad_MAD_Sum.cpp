#include <bits/stdc++.h>
using namespace std;

void f(vector<long long> &brr,vector<long long> &arr,long long &sum,long long n){
map<long long,long long> mp;
long long mad=0;
for (int i = 0; i < n; i++)
{
    mp[arr[i]]++;
    if(mp[arr[i]]>1){
        mad=max(mad,arr[i]);
    }
    brr[i]=mad;
    sum=sum+brr[i];
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


vector<long long> brr(n,0);
long long x=2;
while(x--){
f(brr,arr,sum,n);
arr=brr;
// cout<<sum<<endl;
// for(auto x:arr){
//     cout<<x<<" ";
// }
// cout<<endl;
}


long long temp=0;
map<long long,long long> mp1;
for (int i = 0; i < n; i++)
{
    temp=temp+arr[i];
    if(arr[i]!=0){
    mp1[arr[i]]++;
    }
}
sum=sum-temp;
//cout<<sum<<endl;
//cout<<"temp"<<temp<<endl;
long long z=temp;
for(auto it=mp1.rbegin();it!=mp1.rend();it++){
    long long a=it->first;
    long long b=it->second;
    sum=sum+temp*b-((((b)*(b+1))/2)*a);
   //cout<<"b="<<b<<endl;
   // cout<<"sum="<<sum<<endl;
    temp=temp-b*a;
}
sum=sum+z;
cout<<sum<<endl;


}
return 0;
}