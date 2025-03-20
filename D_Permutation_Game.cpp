#include <bits/stdc++.h>
using namespace std;

long long f(long long n,long long k,long long a,vector<long long> &arr,vector<long long> &brr){


vector<long long> vis(n+1,0);
vector<long long> path;
long long i=a;
long long maxi=-1;
while(vis[i]==0){
vis[i]=1;
path.push_back(brr[i]);
maxi=max(maxi,brr[i]);
i=arr[i];
}

// for(auto x:path){
//     cout<<x<<" ";
// }
// cout<<endl;


long long ans=0;
long long sum=0;
for (int i = 0; i <path.size(); i++)
{
    if(k==0){
        break;
    }
    ans=max(ans,(sum+k*path[i]));
    sum=sum+path[i];
    k--;
}


return ans;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,k,a,b;
cin>>n>>k>>a>>b;
vector<long long> arr(n+1);
vector<long long> brr(n+1);
for (int i = 1; i <=n; i++)
{
    cin>>arr[i];
}
for (int i = 1; i <=n; i++)
{
    cin>>brr[i];
}

long long bod=f(n,k,a,arr,brr);
long long sas=f(n,k,b,arr,brr);
// cout<<bod<<endl;
// cout<<sas<<endl;
if(bod==sas){
    cout<<"Draw"<<endl;
}
else if(bod>sas){
    cout<<"Bodya"<<endl;
}
else{
    cout<<"Sasha"<<endl;
}
}
return 0;
}