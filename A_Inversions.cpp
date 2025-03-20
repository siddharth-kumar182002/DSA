#include <bits/stdc++.h>
using namespace std;

int sum[100001];
int seg[400001];
int arr[100001];

void build(long long i,long long l,long long r){
    if(l==r){
        seg[i]=0;
        return ;
    }
    long long mid=(l+r)/2;
    build(2*i+1,l,mid);
    build(2*i+2,mid+1,r);
    seg[i]=seg[2*i+1]+seg[2*i+2];
}

void update(long long idx,long long val ,long long i,long long l,long long r){
    if(l==r){

        seg[i]=val;
        return ;
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
build(0,0,n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    update(arr[i],1,0,0,n);
    cout<<query(arr[i]+1,n,0,0,n)<<" ";
}





return 0;
}