#include <bits/stdc++.h>
using namespace std;

long long arr[200002];
long long seg[800008];

void update(long long idx,long long val,long long i,long long l,long long r){
    if(l==r){
        seg[i]+=val;
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
long long n,q;
cin>>n>>q;
vector<long long> curr(n,0);
for (int i = 0; i < n; i++)
{
    cin>>curr[i];
}

for (int i = 0; i < q; i++)
{
    long long a;
    cin>>a;
    if(a==1){
           long long l,r,v;
           cin>>l>>r>>v;
           l--;
           r--;
           update(l,v,0,0,n);
           update(r,(-1LL)*v,0,0,n);
    }
    else{
              long long b;
              cin>>b;
              b--;
             cout<<(curr[b]+query(0,b,0,0,n))<<endl;
    }
}




return 0;
}