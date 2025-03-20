#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
vector<long long> arr(n);
vector<long long> brr;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    if(arr[i]%k!=0){
    brr.push_back(k-arr[i]%k);
    }
}
sort(brr.begin(),brr.end());
long long ans=0;
long long maxi=0;
for(int i=0;i<brr.size();i++){
    //cout<<brr[i]<<" ";

        long long temp=brr[i];
        long long j=0;
         while(i<brr.size() && temp==brr[i]){
               ans=brr[i]+k*j;
               j++;
            i++;
         }
        i--;
    
    maxi=max(maxi,ans);
}
//cout<<endl;
if(ans!=0){
    maxi++;
}
cout<<maxi<<endl;


}
return 0;
}