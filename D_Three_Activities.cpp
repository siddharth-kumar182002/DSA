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
vector<pair<long long,long long>> arr(n);
vector<pair<long long,long long>> brr(n);
vector<pair<long long,long long>> crr(n);


for (int i = 0; i < n; i++)
{
    long long a;
    cin>>a;
    arr[i]={a,i};
}
for (int i = 0; i < n; i++)
{
   long long a;
    cin>>a;
    brr[i]={a,i};
}
for (int i = 0; i < n; i++)
{
    long long a;
    cin>>a;
    crr[i]={a,i};
}


sort(arr.begin(),arr.end());
sort(brr.begin(),brr.end());
sort(crr.begin(),crr.end());
//cout<<crr[n-1].second<<endl;
long long ans=-1;
for (int i = n-3; i <n; i++)
{
    for (int j = n-3; j <n ; j++)
    {
        for (int k = n-3; k <n; k++)
        {
            if(arr[i].second!=brr[j].second && brr[j].second!=crr[k].second && crr[k].second!=arr[i].second){
                ans=max(ans,arr[i].first+brr[j].first+crr[k].first);
            }
        }
        
    }
    
}
cout<<ans<<endl;


}
return 0;
}