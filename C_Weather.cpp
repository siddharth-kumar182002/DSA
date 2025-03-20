#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("input.txt", "r", stdin);
long long n;
cin>>n;

vector<long long> arr(n);
long long nzer=0;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    if(arr[i]==0){
        nzer++;
    }
}

vector<long long> lp(n,0),rn(n,0);

if(arr[0]>0){
lp[0]++;
}
for (int i = 1; i < n; i++)
{
    lp[i]=lp[i-1];
    if(arr[i]>0){
        lp[i]+=1;
    }
}

if(arr[n-1]<0){
rn[n-1]=1;
}
for (int i = n-2; i >=0 ; i--)
{
    rn[i]=rn[i+1];
    if(arr[i]<0){
        rn[i]+=1;
    }
}
/*
for(auto x:lp){
    cout<<x<<" ";
}
cout<<endl;*/
if(lp[n-1]==n || lp[n-1]==0){
    cout<<1+nzer<<endl;
}
long long mini=INT_MAX;
if(arr[0]>0){
    mini=1+rn[1];
}
for (int i = 1; i < n-1; i++)
{
    if(arr[i]<0){
        mini=min(mini,lp[i]+rn[i]-1);
    }
    else{
          mini=min(mini,lp[i]+rn[i]);
    }
}
 freopen("output.txt", "w", stdout);
cout<<mini+nzer<<endl;

return 0;
}