#include <bits/stdc++.h>
using namespace std;

long long arr[100001];
long long ones[100001];
long long seg[400001];

void build(long long i,long long l,long long r){
    if(l==r){
        seg[i]=ones[l];
        return ;
    }
    long long mid=(l+r)/2;
    build(2*i+1,l,mid);
    build(2*i+2,mid+1,r);
    seg[i]=seg[2*i+1]+seg[2*i+2];
}
void update(long long idx,long long val,long long i,long long l,long long r){
    if(l==r){
        ones[l]=val;
        seg[i]=ones[l];
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
    if(seg[2*i+2]>k){
            find(k,2*i+2,mid+1,r);
    }
    else{
        find(k-seg[2*i+2],2*i+1,l,mid);
    }
}


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n;
cin>>n;

for (int i = 0; i <=n; i++)
{
    ones[i]=1;
}

build(0,0,n);

for (int i = 0; i < n; i++)
{
    cin>>arr[i];

}

vector<long long> ans;
for (int i = n-1; i>=0 ; i--)
{
    long long x=find(arr[i],0,0,n);
    ans.push_back(x);
    update(x,0,0,0,n);
}
reverse(ans.begin(),ans.end());
for(auto x:ans){
    cout<<x<<" ";
}
cout<<endl;




return 0;
}