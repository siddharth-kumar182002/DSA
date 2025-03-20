#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long v1,v2;
cin>>v1>>v2;
long long t,d;
cin>>t>>d;

vector<long long> arr1(t);
vector<long long> arr2(t);
arr1[0]=v1;
arr2[t-1]=v2;

for (int i = 1; i < t; i++)
{
      arr1[i]=arr1[i-1]+d;
}
for (int i = t-2; i >=0 ; i--)
{
      arr2[i]=arr2[i+1]+d;
}

long long ans=arr1[0]+arr2[t-1];
for (int i = 1; i <t-1; i++)
{
    if(arr1[i]<=arr2[i]){
      ans=ans+arr1[i];
    }
    else{
        ans=ans+arr2[i];
    }
}
cout<<ans<<endl;


return 0;
}