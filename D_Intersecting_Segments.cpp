#include <bits/stdc++.h>
using namespace std;

long long arr[200002];
long long seg[800008];

void update(long long idx,long long val,long long i,long long l,long long r){
    if(l==r){
        seg[i]=val;
        return;
    }
    long long mid=(l+r)/2;
    if(idx<=mid){
        update(idx,val,2*i+1,l,mid);
    }
    else{
        update(idx,val,2*i+2,mid+1,r);
    }

    seg[i]=seg[2*i+1]+seg[2*i+2];
}

long long query(long long s,long long e,long long i,long long l,long long r){
    if(l>e || r<s){
        return 0;
    }
    if(l>=s && r<=e){
        return seg[i];
    }
    
    long long mid=(l+r)/2;
    return (query(s,e,2*i+1,l,mid)+query(s,e,2*i+2,mid+1,r));
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n;
cin>>n;
map<long long,long long> mp;
for (int i = 0; i < 2*n; i++)
{
    cin>>arr[i];
    mp[arr[i]]=-1;
}


vector<long long> ans(n+1,0);
for (int i = 0; i < 2*n; i++)
{
    if(mp[arr[i]]==(-1)){
        mp[arr[i]]=i;
        update(mp[arr[i]],1,0,0,2*n-1);
    }
    else{
        update(mp[arr[i]],0,0,0,2*n-1);
         ans[arr[i]]+=query(mp[arr[i]],i,0,0,2*n-1);
         
    }
}
for (int i = 0; i < 2*n; i++)
{
    update(i,0,0,0,2*n-1);
    mp[arr[i]]=-1;
}
reverse(arr,arr+2*n);

for (int i = 0; i < 2*n; i++)
{
    if(mp[arr[i]]==(-1)){
        mp[arr[i]]=i;
        update(mp[arr[i]],1,0,0,2*n-1);
    }
    else{
        update(mp[arr[i]],0,0,0,2*n-1);
         ans[arr[i]]+=query(mp[arr[i]],i,0,0,2*n-1);
         
    }
}

for (int i = 1; i <=n; i++)
{
    cout<<ans[i]<<" ";
}
cout<<endl;



return 0;
}