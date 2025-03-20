#include <bits/stdc++.h>
using namespace std;
const int N=1e5+7;
long long a[N],tree[4*N];

void build(long long node,long long st,long long en){
if(st==en){
    tree[node]=a[st];
    return;
}

long long mid=(st+en)/2;
build(2*node,st,mid);
build(2*node+1,mid+1,en);
tree[node]=tree[2*node]+tree[2*node+1];
}

long long query(long long node,long long st,long long en,long long l,long long r){
    if(st>r || en<l){
        return 0;
    }
    if(l<=st && en<=r){
        return tree[node];
    }
    
    long long mid=(st+en)/2;
    long long q1=query(2*node,st,mid,l,r);
    long long q2=query(2*node+1,mid+1,en,l,r);
    //cout<<"node="<<node<<" "<<tree[node]<<endl;
    return (q1+q2);
}

void update(long long node,long long ind,long long val,long long st,long long en){
    if(st==en){
        tree[node]=val;
        return;
    }

    long long mid=(st+en)/2;
    if(ind<=mid){
        update(2*node,ind,val,st,mid);
    }
    else{
        update(2*node+1,ind,val,mid+1,en);
    }

    tree[node]=tree[2*node]+tree[2*node+1];
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);



long long n,m;
cin>>n>>m;
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
build(1,0,n-1);
/*
for (int i = 1; i <=16; i++)
{
    cout<<tree[i]<<endl;
}*/

while(m--){
    long long o;
    cin>>o;
    if(o==1){
          long long i,v;
          cin>>i>>v;
          update(1,i,v,0,n-1);
    }
    else{
        long long l,r;
        cin>>l>>r;
      //  cout<<l<<" "<<r<<endl;
         cout<<query(1,0,n-1,l,r-1)<<endl;
    }
}



return 0;
}