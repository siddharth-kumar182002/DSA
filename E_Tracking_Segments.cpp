#include <bits/stdc++.h>
using namespace std;
bool f(long long n,long long mid,vector<pair<long long,long long>> &p,vector<long long> &changes){
             vector<long long> arr(n+1,0);
             for (int i = 1; i <=mid; i++)
             {
                arr[changes[i-1]]=1;
             }
             /*for(auto x:arr){
                cout<<x<<" ";
             }
             cout<<endl;*/
             for (int i = 1; i <=n; i++)
             {
                arr[i]+=arr[i-1];
             }
             /*for(auto x:arr){
                cout<<x<<" ";
             }
             cout<<endl;*/
             for (int i = 0; i < p.size(); i++)
             {
                long long l=p[i].first;
                long long r=p[i].second;
                //cout<<l<<" "<<r<<endl;
                long long need=((r-l+1)/2)+1;
                //cout<<"need="<<need<<endl;
                if(arr[r]-arr[l-1]>=need){
                    return true;
                }
             }
             
             return false;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,m;
cin>>n>>m;
vector<pair<long long,long long>> p;

for (int i = 0; i < m; i++)
{
    long long a,b;
    cin>>a>>b;
    p.push_back({a,b});
}

long long q;
cin>>q;
vector<long long> changes(q);
for (int i = 0; i < q; i++)
{
    cin>>changes[i];
}
long long lo=1;
long long hi=q;

while(hi-lo>1){
long long mid=(hi+lo)/2;
if(f(n,mid,p,changes)){
    hi=mid;
}
else{
    lo=mid+1;
}
}
if(f(n,lo,p,changes)){
    cout<<lo<<endl;
}
else if(f(n,hi,p,changes)){
    cout<<hi<<endl;
}
else{
    cout<<-1<<endl;
}

}
return 0;
}