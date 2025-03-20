#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
long long arr[101];
arr[0]=0;
arr[1]=0;
long long v;
long long l;
int check=0;
for (int i = 1; i <=100; i++)
{
    arr[i]=(i*(i-1))/2;
    if(arr[i]<=k){
        v=i;
        l=arr[i];
        if((arr[n-v]-(k-l))==0){
    cout<<"YES"<<endl;
    for (int i = 1; i <=v; i++)
    {
        cout<<"1"<<" ";
    }
    for (int i = 1; i <=(n-v); i++)
    {
        cout<<"-1"<<" ";
    }
    cout<<endl;
    check=1;
    break;
            }
    }
    else{
        break;
    }
}
//cout<<"v="<<v<<" "<<"l="<<l<<endl;
if(check!=1){
    cout<<"NO"<<endl;
}









}
return 0;
}