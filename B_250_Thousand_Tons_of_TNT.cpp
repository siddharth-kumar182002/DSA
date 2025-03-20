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
vector<long long > sum(n+1,0);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    sum[i+1]=sum[i]+arr[i];
}


long long ans=-1;
for (int i = 1; i <=n; i++)
{
    if(n%i==0){
    
    vector<long long> temp;
    temp.clear();
    for (int j = i; j <=n; j=j+i)
    {
        temp.push_back(sum[j]-sum[j-i]);
    }
    sort(temp.begin(),temp.end());
    ans=max(ans,temp[temp.size()-1]-temp[0]);
    
    }
   // cout<<"i="<<i<<endl;
}
cout<<ans<<endl;

}
return 0;
}