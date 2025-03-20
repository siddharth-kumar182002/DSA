#include <bits/stdc++.h>
using namespace std;

long long arr[100007];
pair<long long,long long> seg[400028];


void build(long long i,long long l,long long r){
    if(l==r){
        seg[i]={arr[l],1};
        return;
    }

    long long mid=(l+r)/2;
    build(2*i+1,l,mid);
    build(2*i+2,mid+1,r);
    if(seg[2*i+1].first==seg[2*i+2].first){
             seg[i]={seg[2*i+1].first,seg[2*i+1].second+seg[2*i+2].second};
    }
    else{
    seg[i]=min(seg[2*i+1],seg[2*i+2]);
    }
}


void update(long long idx,long long val,long long i,long long l,long long r){
    if(l==r){
        seg[i]={val,1};
        return;
    }

    long long mid=(l+r)/2;
    if(idx<=mid){
        update(idx,val,2*i+1,l,mid);
    }
    else{
        update(idx,val,2*i+2,mid+1,r);
    }
      if(seg[2*i+1].first==seg[2*i+2].first){
             seg[i]={seg[2*i+1].first,seg[2*i+1].second+seg[2*i+2].second};
    }
    else{
    seg[i]=min(seg[2*i+1],seg[2*i+2]);
    }
}

pair<long long,long long> query(long long s,long long e,long long i,long long l,long long r){

    long long mid=(l+r)/2;
    if(s>r || e<l){
        return {LONG_LONG_MAX,0*1LL};
    }
    if(l>=s && r<=e){
        return seg[i];
    }
    pair<long long,long long> q1=query(s,e,2*i+1,l,mid);
    pair<long long,long long> q2=query(s,e,2*i+2,mid+1,r);
    if(q1.first==q2.first){
        return {q1.first,q1.second+q2.second};
    }
    else{
        return min(q1,q2);
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

//cout<<seg[1].first<<" "<<seg[1].second<<endl;
for (int i = 0; i < q; i++)
{
    long long t,a,b;
    cin>>t>>a>>b;
    if(t==1){
    
             update(a,b,0,0,n-1);
    }
    else{
                
                pair<long long,long long> ans=query(a,b-1,0,0,n-1);
                cout<<ans.first<<" "<<ans.second<<endl; 
    }
}


return 0;
}