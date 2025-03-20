#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
vector<long long> arr(n);
long long even=0;
long long odd=0;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    if(arr[i]%2==0){
        even++;
    }
    else{
        odd++;
    }
}
if(k==2){
    if(even==0){
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
    }
}
else if(k==4){
    
    if(even>=2){
        cout<<0<<endl;
        continue;
    }
    long long mini=1e9;
    long long f=0;
    for (int i = 0; i < n; i++)
    {
        long long x=arr[i]/k;
        if(arr[i]%k==0){
            cout<<0<<endl;
            f=1;
            break;
        }
        else{
            x=x+1;
            long long temp=k*x-arr[i];
            mini=min(mini,temp);
        }
    }
    //cout<<"mini"<<mini<<endl;
    if(f!=1){
    
    if(even==1){
        cout<<min(mini,1LL)<<endl;;
    }
    else if(even==0){
             cout<<min(mini,2LL)<<endl;
    }
    }
    
}
else{
    long long mini=1e9;
    long long f=0;
    for (int i = 0; i < n; i++)
    {
        long long x=arr[i]/k;
        if(arr[i]%k==0){
            cout<<0<<endl;
            f=1;
            break;
        }
        else{
            x=x+1;
            long long temp=k*x-arr[i];
            mini=min(mini,temp);
        }
    }
    if(f!=1){
        cout<<mini<<endl;
    }
    
}



}
return 0;
}