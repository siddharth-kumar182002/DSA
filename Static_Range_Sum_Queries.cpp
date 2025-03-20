#include <bits/stdc++.h>
using namespace std;

long long arr[200001];
long long segtree[800001];

void build(long long i,long long l,long long r){

    if(l==r){
        segtree[i]=arr[l];
        return;
    }

    long long mid=(l+r)/2;
    build(2*i+1,l,mid);
    build(2*i+2,mid+1,r);
    segtree[i]=segtree[2*i+1]+segtree[2*i+2];
}

void update(long long idx,long long val,long long i,long long l,long long r){

if(l==r){
    segtree[i]=val;
    return ;
}

    long long mid=(l+r)/2;
    if(idx<=mid){
        update(idx,val,2*i+1,l,mid);
    }
    else{
        update(idx,val,2*i+2,mid+1,r);
    }

    segtree[i]=segtree[2*i+1]+segtree[2*i+2];


}

long long query(long long s,long long e,long long i,long long l,long long r){


long long mid=(l+r)/2;

if(s>r || e<l){
    return 0;
}

if(l>=s && r<=e){
    return segtree[i];
}

return (query(s,e,2*i+1,l,mid))+(query(s,e,2*i+2,mid+1,r));


}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,q;
cin>>n>>q;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
build(0,0,n-1);
 //cout<<query(0,7,0,0,n-1)<<endl;
for (int i = 0; i < q; i++)
{
    long long a,b;
    cin>>a>>b;
          a--;
          b--;
    cout<<query(a,b,0,0,n-1)<<endl;
}


return 0;
}