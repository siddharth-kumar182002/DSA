#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,m;
cin>>n>>m;

//dp[0][0]=0;
//dp[1][0]=0;
//dp[2][x]=


//dp[i][y]=
//dp[i][y-c]=

map<long long,long long> arr;
map<long long,long long> prv;
prv[0]=0;
long long p,q;
cin>>p>>q;
for (int i = 1; i < n; i++)
{
    long long a,b;
    cin>>a>>b;
    arr.clear();
     for(auto y:prv){
        
            arr[y.first]=max(arr[y.first],y.second+m);
            //cout<<y.first<<" ";
            if(y.second+m>=a){
                  arr[y.first+b]=max(arr[y.first+b],(y.second+m-a));
            }
          
     }
     /*for(auto w:arr){
        cout<<w.first<<" ";
     }
     cout<<endl;*/
    prv.clear();
     prv.insert(arr.begin(),arr.end());

}
long long ans=0;
for(auto x:arr){
    ans=max(ans,x.first);
}
if(p==0){
    ans=ans+q;
}
cout<<ans<<endl;
}
return 0;
}