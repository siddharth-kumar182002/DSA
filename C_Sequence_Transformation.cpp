#include <bits/stdc++.h>
using namespace std;
const long long m=1e6;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long > arr;
long long prv;
for (int i = 0; i < n; i++)
{
    long long x;
    cin>>x;
    if(i-1>=0){
         if(x!=prv){
            arr.push_back(x);
            prv=x;
         }
    }
    else{
        arr.push_back(x);
        prv=x;
    }
}
vector<long long> count(n+1,1);
long long last=arr.size();
for (int i = 0; i <last; i++)
{
    count[arr[i]]+=1;
}

count[arr[0]]-=1;
count[arr[last-1]]-=1;

long long ans=INT_MAX;
for (int i = 0; i < last; i++)
{
    ans=min(ans,count[arr[i]]);
}

cout<<ans<<endl;



}
return 0;
}