#include <bits/stdc++.h>
 using namespace std;
long long start[200001];
long long seg[800008];
long long ed[200001];
long long val[200001];
vector<long long> tree[200001];

 
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
 
 long long timer=0;
void dfs(long long src,long long par){
start[src]=timer++;
for(auto x:tree[src]){
    if(x!=par){
        dfs(x,src);
    }
}
 ed[src]=timer-1;
}

 
 

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,q;
cin>>n>>q;

 for (int i = 1; i <=n; i++)
 {
       cin>>val[i];
 }
for(int i=0;i<n-1;i++){
    long long a,b;
    cin>>a>>b;
    tree[a].push_back(b);
    tree[b].push_back(a);
}
 dfs(1,-1);

 for(int i=1;i<=n;i++){
     update(start[i],val[i],0,0,n);
 }

 while(q--){
    long long t;
    cin>>t;
    if(t==1){
           long long a,b;
           cin>>a>>b;
           update(start[a],b,0,0,n);
    }
    else{
         long long x;
         cin>>x;
         cout<<query(start[x],ed[x],0,0,n)<<endl;
    }
 }

 
return 0;
}