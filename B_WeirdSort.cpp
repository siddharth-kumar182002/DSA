#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n,m;
cin>>n>>m;
vector<long long> arr(n),prr(n,0);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
for (int i = 0; i < m; i++)
{
long long x;
cin>>x;
prr[x-1]=1;
}
int f=0;
for(int j=n-1;j>=1;j--){
for (int i = 0; i <=j-1; i++)
{
    if(arr[i]>arr[i+1]){
        if(prr[i]!=0){
            swap(arr[i],arr[i+1]);
        }
        else{
            f=1;
            cout<<"NO"<<endl;
            break;
        }
    }
    
}
if(f==1){
        break;
    }
}
if(f!=1){
    cout<<"YES"<<endl;
}



}
return 0;
}