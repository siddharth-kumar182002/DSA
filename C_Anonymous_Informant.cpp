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
int f=0;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    if(arr[i]>n){
        f=1;   
         }
}
if(f==0 || arr[n-1]==n){
cout<<"Yes"<<endl;
continue;
}

vector<long long> vis(n+1,0);
long long c=0;
long long x=arr[n-1];
long long ind=n-1;
int ch=0;
while(!vis[ind]){
    vis[ind]=1;
if(arr[ind]>n){
    ch=1;
    break;
}
c++;
ind=ind-arr[ind];
if(ind<0){
    ind=ind+n;
}
}

if(ch==1){
if(c>=k){
    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}
}
else{
    cout<<"Yes"<<endl;
}


}
return 0;
}