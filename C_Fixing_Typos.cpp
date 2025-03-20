#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);

string s;
cin>>s;
long long n=s.size();
vector<long long > arr;
vector<long long > ind;
for (int i = 0; i <n; i++)
{
    long long x=s[i];
    long long count=0;
    long long j=i;
    while(i<n && s[i]==x){
           count++;
           i++;
    }
    arr.push_back(count);
    ind.push_back(j);
    i--;
}
// for(auto x:arr){
//     cout<<x<<" ";
// }
// cout<<endl;
arr[0]=min(2*1LL,arr[0]);
for (int i = 1; i <arr.size(); i++)
{
    if(arr[i]>=2 && arr[i-1]==2){
        arr[i]=1;
        continue;
    }
    if(arr[i-1]==1){
        arr[i]=min(2*1LL,arr[i]);
    }
}
// for(auto x:arr){
//     cout<<x<<" ";
// }
// cout<<endl;
string ans="";
for (int i = 0; i < ind.size(); i++)
{
    for (int j = 0; j < arr[i]; j++)
    {
        ans+=s[ind[i]+j];
    }
    
}
cout<<ans<<endl;
return 0;
}