#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);

long long n,k;
cin>>n>>k;
vector<long long> arr(n);
long long maxi=-1;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    maxi=max(maxi,arr[i]);
}
sort(arr.begin(),arr.end());

vector<long long> count(maxi+1,0);
map<long long,long long> mp;
for (int i = 0; i <n; i++)
{
    long long x=arr[i];
     count[x]++;
     long long l=0;
    while(x>0){
       
      
        x=x>>1;
        l++;
          if(count[x]<k){
        mp[x]+=l;
        }
         count[x]++;
    }
    
}

long long mini=1e9;
for (int i = 0; i <=maxi; i++)
{
    //cout<<"i="<<i<<" "<<count[i]<<endl;
   // cout<<mp[i]<<endl;
    if(count[i]>=k){
          mini=min(mini,mp[i]);
    }

}



cout<<mini<<endl;



return 0;
}