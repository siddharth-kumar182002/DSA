#include <bits/stdc++.h>
using namespace std;
long long med(vector<long long> vec){
    sort(vec.begin(),vec.end());
    long long n=vec.size();
    return (vec[n/2]);
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,m;
cin>>n>>m;
vector<vector<long long> > arr(n,vector<long long> (m));


for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        cin>>arr[i][j];
    }
    
}

long long ans=0;

//median will find closest number to all the four
for (int j = 0; j <m/2; j++)
{
    for (int i = 0; i <n/2 ;i++)
    {
        vector<long long> brr={arr[i][j],arr[n-i-1][j],arr[i][m-j-1],arr[n-i-1][m-j-1]};
        long long avg=med(brr);
        
        ans+=abs(avg-arr[i][j])+abs(avg-arr[n-i-1][j])+abs(avg-arr[i][m-j-1])+abs(avg-arr[n-i-1][m-j-1]);
      //  cout<<avg<<endl;
    }
}

if(n%2!=0){
    long long i=n/2;
for (int j = 0; j <m/2 ;j++)
    {
        long long avg=min(arr[i][j],arr[i][m-j-1]);
        ans+=abs(avg-arr[i][j])+abs(avg-arr[i][m-j-1]);
        //cout<<avg<<endl;
    }
}
if(m%2!=0){
 long long j=m/2;
for (int i = 0; i <n/2 ;i++)
    {
        long long avg=min(arr[i][j],arr[n-i-1][j]);
        ans+=abs(avg-arr[i][j])+abs(avg-arr[n-i-1][j]);
    }
}

cout<<ans<<endl;
}
return 0;
}