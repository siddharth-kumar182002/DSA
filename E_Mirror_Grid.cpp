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
vector<vector<long long>> arr(n,vector<long long> (n,0));
for (int i = 0; i < n; i++)
{
    string s;
    cin>>s;
    for (int j = 0; j < n; j++)
    {
        if(s[j]=='0'){
            arr[i][j]=0;
        }
        else{
            arr[i][j]=1;
        }
    }
    
}

long long ans=0;
long long x0=n/2;
long long y0=n/2;
long long h=0;
for (int i = 0; i <x0; i++)
{
    for (int j = 0; j <y0; j++)
    {
        long long i0=abs(i);
        long long j0=abs(j);
              long long one=0;
              if(arr[n-i0-1][j]==1){
                one++;
              }
              if(arr[i][n-j0-1]==1){
                one++;
              }
              if(arr[i][j]==1){
                one++;
              }
              if(arr[n-i0-1][n-j0-1]==1){
                one++;
              }
              ans=ans+min(one,4-one);
          // cout<<"i="<<i<<" "<<"j="<<j<<endl;
           // cout<<ans<<endl;
    }
    
}
if(n%2!=0){
for (int i = 1; i <=n/2; i++)
{
  long long k=0;
    if(arr[x0+i][y0]==1){
k++;
    }
     if(arr[x0][y0+i]==1){
k++;
    }
     if(arr[x0-i][y0]==1){
k++;
    }
     if(arr[x0][y0-i]==1){
k++;
    }
    h+=min(k,4-k);
    
}
}
ans=ans+min(h,2*n-1-h);
cout<<ans<<endl;

}
return 0;
}