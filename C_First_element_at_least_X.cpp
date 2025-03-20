#include <bits/stdc++.h>
using namespace std;
 
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
    seg[i]=max(seg[2*i+1],seg[2*i+2]);
}
 
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
   
    
    seg[i]=max(seg[2*i+1],seg[2*i+2]);
}
 
long long query(long long x,long long i,long long l,long long r){

//cout<<"l="<<l<<" "<<"R="<<r<<endl;
 if(l==r){
    if(seg[i]<x){
        return -1;
    }
    else{
        return l;
    }
 }

 long long mid=(l+r)/2;
 if(seg[2*i+1]>=x){
    return query(x,2*i+1,l,mid);
 }
 else{
    return query(x,2*i+2,mid+1,r);
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
// update(2,5,0,0,n-1);
// cout<<seg[0]<<endl;
//  cout<<query(4,0,0,n-1)<<endl;
for (int i = 0; i < q; i++)
{
    long long a;
    cin>>a;
    if(a==1){
        long long b,c;
        cin>>b>>c;
          update(b,c,0,0,n-1);
    }
    else{
         long long b;
         cin>>b;      
                cout<<query(b,0,0,n-1)<<endl;
    }
}
 
 
 
 
 
return 0;
}