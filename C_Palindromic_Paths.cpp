#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,m;
cin>>n>>m;
vector<vector<long long>> arr(n,vector<long long> (m));
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        cin>>arr[i][j];
    }  
}
long long ans=0;
map<long long,long long> mp;
map<long long,long long> total;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        long long x=i+j;
        long long y=((n-1)-i)+((m-1)-j);
        // cout<<i<<" "<<j<<endl;
        // cout<<((n-1)-i)<<" "<<((m-1)-j)<<endl;
           total[min(x,y)]++;
        if(arr[i][j]==0){
           
            mp[min(x,y)]++;
        }
        if(arr[((n-1)-i)][((m-1)-j)]==0){
           
            mp[min(x,y)]++;
        }
    }
    
}
for(auto x: mp){
    
    long long zero=(x.second)/2;
    // cout<<x.first<<" "<<zero<<endl;
    // cout<<"total="<<total[x.first]<<endl;
    if((x.first)==((m+n-1)/2)){
        continue;
    }
    ans=ans+min(zero,total[x.first]-zero);
    // cout<<ans<<endl;

}
cout<<ans<<endl;


}
return 0;
}