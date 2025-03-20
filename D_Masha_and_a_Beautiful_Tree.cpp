#include <bits/stdc++.h>
using namespace std;
long long solve(long long l,long long r,vector<long long> &arr){

//cout<<"l="<<l<<endl;
//cout<<"r="<<r<<endl;
if(l==r){
    return 0;
}

    long long maxi=-1;
    long long maxiind=-1;
    long long mini=1e11;
    long long miniind=-1;
    for (int i = l; i <=r; i++)
    {
        if(arr[i]>maxi){
               maxi=arr[i];
               maxiind=i;
        }
        if(arr[i]<mini){
            mini=arr[i];
            miniind=i;
        }
    }

    long long s1l=l;
    long long s1r=(l+r)/2;
    long long s2l=s1r+1;
    long long s2r=r;
     long long ans=0;
    if(maxiind<=s1r && miniind>=s2l ){
        ans++;
         for (int i = 0; i <(s1r-s1l+1); i++)
         {
            swap(arr[s1l+i],arr[s2l+i]);
         }
         
    }
    
    
    return  solve(s1l,s1r,arr)+solve(s2l,s2r,arr)+ans;


}
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long > arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}


long long ans=solve(0,n-1,arr);
if(is_sorted(arr.begin(),arr.end())){
    cout<<ans<<endl;
}
else{
    cout<<-1<<endl;
}
}
return 0;
}