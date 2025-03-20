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
vector<long long> arr(n+m+1);
vector<long long> brr(n+m+1);
for (int i = 0; i <=(n+m); i++)
{
    cin>>arr[i];
}
for (int i = 0; i <=(n+m); i++)
{
    cin>>brr[i];
}
if(n>m){
    swap(n,m);
    swap(arr,brr);
}
vector<long long> up;
vector<long long> down;
up.push_back(0);
down.push_back(0);
for (int i = 0; i <=(n+m); i++)
{
    if(arr[i]>brr[i]){
        up.push_back(arr[i]);
        down.push_back(brr[i]);
    }
}
long long x=(up.size());
for (int i = 0; i <=(n+m); i++)
{
    if(arr[i]<brr[i]){
        up.push_back(arr[i]);
        down.push_back(brr[i]);
    }
}
for (int i = 1; i <=(n+m+1); i++)
{
    up[i]=up[i]+up[i-1];
    down[i]=down[i]+down[i-1];
}
//cout<<up.size()<<endl;
//c/out<<"x"<<x<<endl;

for (int i = 1; i <=(n+m+1); i++)
{
    long long ans=0;
    //cout<<"bef"<<ans<<endl;
    if(x>n){
        if(i>n){
            ans=up[n]+down[n+m+1]-down[n]-(down[i]-down[i-1]);
        }
        else{
            ans=up[n]+down[n+m+1]-down[n]-(up[i]-up[i-1])-(down[n+1]-down[n])+(up[n+1]-up[n]);
        }
    }
    else{
        if(i>=x){
             ans=up[x-1]+(down[x-1+m]-down[x-1])+(up[n+m+1]-up[x+m-1]);
        }
        else{

        }
    }
}
cout<<endl;



}
return 0;
}