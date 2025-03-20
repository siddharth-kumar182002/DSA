#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long> arr(n);
long long ind=-1;
long long maxi=-1;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    if(arr[i]>maxi){
        ind=i;
        maxi=arr[i];
    }
}
vector<long long> brr;
brr.push_back(arr[ind]);
arr[ind]=0;
long long cg=brr[0];
for (int i = 1; i < n; i++)
{
    long long id=0;
    long long mxi=0;
    for (int j = 0; j < n; j++)
    {
        if(arr[j]!=0 && (__gcd(arr[j],cg))>mxi){
           
            mxi=(__gcd(arr[j],cg));
            id=j;
        }
    }
   
    cg=mxi;
  brr.push_back(arr[id]);
  arr[id]=0;
    
}

for(auto x:brr){
    cout<<x<<" ";
}
cout<<endl;
}
return 0;
}