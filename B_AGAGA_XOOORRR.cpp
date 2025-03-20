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
vector<long long> arr(n+1,0*1LL);

for (int i = 1; i <= n; i++)
{
    cin>>arr[i];
}
for (int i = 1; i <=n; i++)
{
    arr[i]=arr[i]^arr[i-1];
}
long long f=0;
for (int i = 1; i <n; i++)
{
    if((arr[i]^arr[0])==(arr[n]^arr[i])){
        //cout<<i<<endl;
        f=1;
        break;
    }
}
for (int i = 1; i <n; i++)
{
    if(f==1){
        break;
    }
    for(int j=i+1;j<n;j++){
       long long x=arr[i]^arr[0];
       long long y=arr[i]^arr[j];
       long long z=arr[j]^arr[n];
          if(x==y && y==z){
            f=1;
            break;
          }

    }
    
}
if(f==1){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}



}
return 0;
}