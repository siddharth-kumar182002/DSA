#include <bits/stdc++.h>
using namespace std;

void bcows(vector<long long> &v,long long c,int t,int n,long long &w){

long long l=v[c]-t;
long long r=v[c]+t;
v[c]=-1000;
int flg=0;
for (int i = 0; i <n; i++)
{
    if(v[i]==-1000){
        continue;
    }
    if(v[i]>=l && v[i]<=r){
        w++;
        cout<<"w"<<w<<endl;
        cout<<"v[i]="<<v[i]<<endl;
        cout<<"t="<<t<<endl;
      bcows(v,i,t+1,n,w);
      flg=1;
    }
}
//cout<<"w"<<w<<endl;
if(flg!=1){
    return ;
}



}
int main() {
int n;
cin>>n;
vector<long long> arr(n);
for (long long i = 0; i < n; i++)
{
    cin>>arr[i];
}

sort(arr.begin(),arr.end());

long long ans=-1;
for (long long i = 0; i < n; i++)
{
    vector<long long> v=arr;
    long long w=1;
    bcows(v,i,1,n,w);
    ans=max(ans,w);
    cout<<w<<endl;
}

//cout<<ans<<endl;
return 0;
}