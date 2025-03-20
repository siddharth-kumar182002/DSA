#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<pair<long long,long long>> arr;
for (int i = 0; i < n; i++)
{
    long long l,r;
    cin>>l>>r;
    arr.push_back({l,r});
}
//0000011111
long long lo=0;
long long hi=1e9;

while(hi>lo){
    long long k=(hi+lo)/2;
    bool ch=true;
    pair<long long ,long long> p={0,0};
    for (int i = 0; i < n; i++)
    {
        long long l=arr[i].first;
        long long r=arr[i].second;
        long long x=max(p.first-k,l);
        long long y=min(p.second+k,r);
       // cout<<l<<" "<<r<<endl;
        //cout<<"i="<<i<<endl;
        //cout<<x<<" "<<y<<endl;
        if(x>y){
            ch=false;
            break;
        }
        p={x,y};
    }
    //cout<<ch<<endl;

    if(ch){
       hi=k;
    }
    else{
        lo=k+1;
    }
   // cout<<lo<<endl;
    //cout<<hi<<endl;
}
cout<<lo<<endl;

}
return 0;
}