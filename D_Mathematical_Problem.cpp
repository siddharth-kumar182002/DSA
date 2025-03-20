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
string s;
cin>>s;


vector<long long> arr;
for (int i = 0; i < s.size(); i++)
{
    arr.push_back(s[i]-'0');
}


for (int i = 1; i <n; i++)
{
      long long val=arr[i-1]*10+arr[i];
      //cout<<val<<endl;
     
}


long long j=0;
long long ans=1e9;
vector<long long> brr;
while(j<(n-1)){
    
brr.clear();
for (int i = 0; i <n; i++)
{
    if(i!=j){
        brr.push_back(arr[i]);
        if(arr[i]==0){
            
        }
    }
    else{
        brr.push_back(arr[i]*10+arr[i+1]);
        i++;
    }
}
// for(auto x:brr){
//     cout<<x<<" ";
// }
// cout<<endl;
long long curr=0;
long long f=0;
    for (int i = 0; i < brr.size(); i++)
    {
        if(brr[i]==0){
            f=1;
            curr=0;
            break;
        }
        if(brr[i]==1){
            continue;
        }
        else{
            f=1;
            curr=curr+brr[i];
        }
    }
    if(f==0){
        curr=1;
    }
    ans=min(ans,curr);
    j++;
}

cout<<ans<<endl;


    
    



}
return 0;
}