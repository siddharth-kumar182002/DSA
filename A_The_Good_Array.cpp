#include <bits/stdc++.h>
using namespace std;
int f(int i, int k){
    if(i%k==0){
        return i/k;
    }
    else{
        return (i/k+1);
    }
}
int main() {
int t;
cin>>t;
while(t--){

int n;
cin>>n;
int k;
cin>>k;
int ch=0;
int curr=0;
int count=0;
int arr[n+1]={0};
for (int i = 1; i <=n; i++)
{
    curr=f(i,k);
    if(curr!=ch){
        arr[i]=1;
        ch=curr;
        
    }
}
for(auto x: arr){
    cout<<x<<" ";
}
int ch1=0;
int curr1=0;
int count1=0;
for (int i = n; i >=0; i++)
{
    if(arr[i]==1){
        count1++;
    }
    curr1=f(i,k);
    if(curr1!=ch1){
        if(count1<curr1){
    arr[i]=1;
        }
    ch1=curr1;

    
}

    
}
for(auto x: arr){
    cout<<x<<" ";
}
}
return 0;
}