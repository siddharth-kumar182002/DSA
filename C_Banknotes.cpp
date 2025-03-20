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
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    long long x=1;
    while(arr[i]--){
        x=x*10;
    }
    arr[i]=x;
}
k++;
long long ans=0;
for (int i = 0; i <n; i++)
{
    long long curr=k;
    if(i+1<n){
            curr=min(curr,(arr[i+1]/arr[i])-1);
    }
    ans=ans+curr*arr[i];
    k=k-curr;
}
cout<<ans<<endl;


}
return 0;
}