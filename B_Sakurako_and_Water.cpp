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
vector<vector<long long>> arr(n);
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        long long x;
        cin>>x;
        arr[i].push_back(x);
    }
    
}
long long ans=0;
for(int j=n-1;j>=0;j--){
  //  cout<<"j="<<j<<endl;
         long long mini=1e16;
    long long i=0;
    long long k=j;
    while(i<n && k<n){
        mini=min(mini,arr[i][k]);
        
        i=i+1;
        k=k+1;
    }
 //cout<<mini<<endl;
    if(mini<0){
        ans=ans+abs(mini);
    }
    //cout<<"Ans="<<ans<<endl;

}

for(int i=1;i<n;i++){
         long long mini=1e16;
         //cout<<"i="<<i<<endl;
    long long j=0;
    long long k=i;
    while(i<n && k<n){
        mini=min(mini,arr[k][j]);
        j=j+1;
        k=k+1;
    }
    if(mini<0){
        ans=ans+abs(mini);
    }
    // cout<<mini<<endl;
    //  cout<<"Ans="<<ans<<endl;

}
cout<<ans<<endl;
}
return 0;
}