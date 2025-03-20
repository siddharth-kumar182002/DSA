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
vector<long long> fruit(n);
vector<long long> height(n);
for (int i = 0; i < n; i++)
{
    cin>>fruit[i];
}
for (int i = 0; i < n; i++)
{
    cin>>height[i];
}


long long ans=0;

long long l=0;
long long r=0;

while(l<n && r<n){

long long temp=fruit[r];
if(temp<=k){
ans=max(ans,r-l+1);
}
while(r<n-1 && height[r]%height[r+1]==0){
    r++;
    temp=temp+fruit[r];
    while(l<=r && temp>k){
        temp=temp-fruit[l];
        l++;
    }
    if(r>=l && temp<=k){
    ans=max(ans,r-l+1);
    }
 
}

r++;
l=r;
}
cout<<ans<<endl;

}
return 0;
}