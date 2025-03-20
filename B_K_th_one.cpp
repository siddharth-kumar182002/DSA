#include <bits/stdc++.h>
using namespace std;


long long arr[100001];
long long seg[400001];

void build(long long i,long long l,long long r){
    if(l==r){
        seg[i]=arr[l];
        return ;
    }
    long long mid=(l+r)/2;
    build(2*i+1,l,mid);
    build(2*i+2,mid+1,r);
    seg[i]=seg[2*i+1]+seg[2*i+2];
}
void update(long long idx,long long val,long long i,long long l,long long r){
    if(l==r){
        arr[l]=val;
        seg[i]=arr[l];
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


long long find(long long k,long long i,long long l,long long r){
    if(l==r){
        return l;
    }

    long long mid=(l+r)/2;
    if(seg[2*i+1]>k){
            find(k,2*i+1,l,mid);
    }
    else{
        find(k-seg[2*i+1],2*i+2,mid+1,r);
    }
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
//cout<<seg[0]<<endl;
for (int i = 0; i <q; i++)
{
    long long a,b;
    cin>>a>>b;
    if(a==1){
          update(b,!arr[b],0,0,n-1);
    }
    else{
        cout<<find(b,0,0,n-1)<<endl;
    }
}

return 0;
}