#include <bits/stdc++.h>
using namespace std;

struct node{
long long sum,pref,suf,ans;
};
long long arr[100001];
node seg[400004];

void build(long long i,long long l,long long r){
    if(l==r){
        if(arr[l]<=0){
                     seg[i]={arr[l],0,0,0};
        }
        else{
                      seg[i]={arr[l],arr[l],arr[l],arr[l]};
        }
        return;
    }

long long mid=(l+r)/2;
build(2*i+1,l,mid);
build(2*i+2,mid+1,r);

seg[i].sum=seg[2*i+1].sum+seg[2*i+2].sum;
seg[i].pref=max(seg[2*i+1].pref,(seg[2*i+1].sum+seg[2*i+2].pref));
seg[i].suf=max(seg[2*i+2].suf,(seg[2*i+2].sum+seg[2*i+1].suf));
seg[i].ans=max({seg[2*i+1].ans,seg[2*i+2].ans,seg[2*i+1].suf+seg[2*i+2].pref});

}

void update(long long idx,long long val,long long i,long long l,long long r ){
      if(l==r){
        arr[l]=val;
        if(arr[l]<=0){
                     seg[i]={arr[l],0,0,0};
        }
        else{
                      seg[i]={arr[l],arr[l],arr[l],arr[l]};
        }
        return;
    }
    long long mid=(l+r)/2;
    if(idx<=mid){
        update(idx,val,2*i+1,l,mid);
    }
    else{
        update(idx,val,2*i+2,mid+1,r);
    }

seg[i].sum=seg[2*i+1].sum+seg[2*i+2].sum;
seg[i].pref=max(seg[2*i+1].pref,(seg[2*i+1].sum+seg[2*i+2].pref));
seg[i].suf=max(seg[2*i+2].suf,(seg[2*i+2].sum+seg[2*i+1].suf));
seg[i].ans=max({seg[2*i+1].ans,seg[2*i+2].ans,seg[2*i+1].suf+seg[2*i+2].pref});

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

cout<<seg[0].ans<<endl;
for (int i = 0; i < q; i++)
{
    long long a,b;
    cin>>a>>b;
    update(a,b,0,0,n-1);
    cout<<seg[0].ans<<endl;
}


return 0;
}