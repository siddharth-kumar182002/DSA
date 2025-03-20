#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n,x;
cin>>n>>x;
vector<long long> arr(n+1);
arr[0]=0;
for (int i = 1; i <=n; i++)
{
    cin>>arr[i];
}
partial_sum(arr.begin(),arr.end(),arr.begin());


vector<long long> maxsum;
for (int i = 0; i <=n; i++)
{
    long long maxi=-1e11;
    for (int j = i; j <arr.size(); j++)
    {
        //cout<<arr[j]-arr[i]<<endl;
            maxi=max(maxi,(arr[j]-arr[j-i]));
        
    }
    maxsum.push_back(maxi);
}



for(int k=0;k<=n;k++){
    long long ans=-1e11;
for (int i = 0; i <maxsum.size(); i++)
{
    if(i>=k){
        ans=max(ans,(maxsum[i]+k*x));
    }
    else{
          ans=max(ans,(maxsum[i]+i*x));
    }
}
cout<<ans<<" ";
}

cout<<endl;
}
return 0;
}