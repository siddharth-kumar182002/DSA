#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
vector<long long> arr(n);
vector<long long > ans;


for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
ans=arr;
//cout<<ans[1]<<endl;
long long mex=0;
sort(arr.begin(),arr.end());

for (int i = 0; i < n; i++)
{
      if(arr[i]==mex){
       mex= mex+1;
      }
}
//cout<<mex<<endl;
//0132
   //2013
ans.push_back(mex);
long long ind=k%(n+1);
//cout<<ind<<endl;
long long q=n+1;
vector<long long> ansf(n+1,0);
long long ind1=0;
while(q--){
    if(ind1==n+1){
        ind1=0;
    }
    if(ind==n+1){
        ind=0;
    }
    ansf[ind]=ans[ind1];    
    ind++;
    ind1++;
}
for (int i = 0; i <n; i++)
{
    cout<<ansf[i]<<" ";
}
cout<<endl;

}
return 0;
}
