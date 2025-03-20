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

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
vector<long long> count(31,0);

for (int i = 0; i < n; i++)
{
       long long j=0;
       while(arr[i]>0){
        if(arr[i]&1){
            count[j]++;
        }
        arr[i]=arr[i]>>1;
        j++;
       }
}
vector<long long> ans;
long long x=0;
 for (int j = 0; j < 31; j++)
{
            
      x=__gcd(x,count[j]);
}
//cout<<x<<endl;

if(x==0){
    long long i=1;
    while(n--){
        cout<<i<<" ";
        i++;
    }
    cout<<endl;
    continue;
}

for (int i = 1; i*i<=x; i++)
{
    if(x%i==0){
        if(x/i==i){
              if(i<=n){
                ans.push_back(i);
              }
        }
        else{
               if(i<=n){
                ans.push_back(i);
              }
              if((x/i)<=n){
                ans.push_back(x/i);
              }
        }
    }
}
sort(ans.begin(),ans.end());
for(auto x: ans){
    cout<<x<<" ";
}
cout<<endl;
}
return 0;
}