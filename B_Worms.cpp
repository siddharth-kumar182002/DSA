#include <bits/stdc++.h>
using namespace std;


int main() {

long long n;
cin>>n;
vector<long long > arr(n);
vector<long long > ans;

long long sum=0;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
sum=sum+arr[i];
ans.push_back(sum);
}
/*
for(auto x:ans){
    cout<<x<<" ";
}
cout<<endl;*/

long long q;
cin>>q;
vector<long long> res;
for (int i = 0; i < q ; i++)
{
    long long temp;
    cin>>temp;
//cout<<temp<<" ";
   long long lo=0;
    long long hi=n-1;
    while(hi-lo>1){
        long long mid=(hi+lo)/2;
        if(ans[mid]>=temp){
            hi=mid;
        }
        else{
            lo=mid+1;
        }
        //cout<<"lo"<<lo<<" ";
        //cout<<"hi"<<hi<<" ";
    }
    //cout<<endl;
if(ans[lo]>=temp){
    res.push_back(lo+1);
}
else{
    res.push_back(hi+1);
}
}

for (int i = 0; i < res.size(); i++)
{
    cout<<res[i]<<endl;
}






return 0;
}