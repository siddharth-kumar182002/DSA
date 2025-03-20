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
//k->=+ve
//rest->=-ve
//-1000----1000
//4 4 4-1-1-1-1
//1 2 3 4 5 6 (k-1)*(k)/2+1
long long a=1;
long long count=0;
long long pr=0;
long long f=0;
vector<long long > arr(n,-1000);
for (int i = 0; i < n; i++)
{
         pr++;
    count=count+pr;
if(count>=k && f==0){
    f=1;
    long long temp=count-k;
       if(temp==0){
        arr[i]=a;
       }
       else{
        arr[i]=-1*temp;
        if(i-temp>=0){
        arr[i-temp]++;
        }
       }
    break;
}
arr[i]=a;
}
for(auto x:arr){
    cout<<x<<" ";
}
cout<<endl;
}
return 0;
}