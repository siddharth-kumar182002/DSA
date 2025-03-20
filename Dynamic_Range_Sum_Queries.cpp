#include <bits/stdc++.h>

long long arr[200001];
long long seg[800008];

void build(long long i,long long l,long long r){
    if(l==r){
        seg[i]=arr[l];
        return;
    }

    long long mid=(l+r)/2;
    build(2*i+1,l,mid);
    build(2*i+2,mid+1,r);
    seg[i]=seg[2*i+1]+seg[2*i+2];
}

void update(long long idx,long long val,long long i,long long l,long long r){

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



long long mid=(l+r)/2;
if(s>r || e<l){
    return 0;
}

if(l>=s && r<=e){
    return seg[i];
}

return query(s,e,2*i+1,l,mid)+query(s,e,2*i+2,mid+1,r);



}



using namespace std;
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

for (int i = 0; i < q; i++)
{
    long long a,b,c;
    cin>>a>>b>>c;

    if(a==1){
        b--;
            update(b,c,0,0,n-1);
    }
    else{
        b--;
        c--;
          cout<<query(b,c,0,0,n-1)<<endl;
    }

}

return 0;
}