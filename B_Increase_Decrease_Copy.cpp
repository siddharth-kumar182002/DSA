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
vector<long long> brr(n+1);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
long long ans=0;
//vector<long long > temp;
long long mini=1e10;
for (int i = 0; i <=n; i++)
{
    cin>>brr[i];
    
}
long long f=0;
for (int i = 0; i <n; i++)
{
    
        ans+=abs(arr[i]-brr[i]);
        if((arr[i]>=brr[n] && brr[i]<=brr[n]) || (arr[i]<=brr[n] && brr[i]>=brr[n])){
                    f=1;
        }
        if(arr[i]<=brr[n]){
        mini=min(mini,(abs(max(arr[i],brr[i])-brr[n])+1));
        }
        else{
             mini=min(mini,(abs(min(arr[i],brr[i])-brr[n])+1));
        }
           
}
//cout<<"MIN"<<mini<<endl;
if(f==1){
    ans=ans+1;
}
else{
    ans=ans+mini;
}
cout<<(ans)<<endl;





}
return 0;
}