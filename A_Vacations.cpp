#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int n;
cin>>n;
vector<long long> arr(n);

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
long long ans=0;
for (int i = 0; i < n; i++)
{
    if(arr[i]==0){
        ans++;
       while(arr[i+1]==3 && (i+1)<n){
        i++;
       }
        continue;
    }

    long long a=arr[i];
    long long count=0;
    while(arr[i+1]==3){
        i++;
        count++;
    }
    if(count%2==0){
         if(a!=3 && arr[i+1]==a && (i+1)<n){
            arr[i+1]=0;
         }
    }
    else{
         if(a!=3 && arr[i+1]!=a && (i+1)<n){
            arr[i+1]=0;
         }
    }
  
}
/*
for(auto x:arr){
    cout<<x<<" ";
    }
    cout<<endl;*/
cout<<ans<<endl;

return 0;
}