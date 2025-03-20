#include <bits/stdc++.h>
using namespace std;
bool f(long long mid,map<long long,long long> &mp,long long h){
            long long sum=0;
            for(auto x:mp){
                long long a=x.first;
                long long b=x.second;
                     long long c=(mid/a)+1;
                     sum=sum+c*b;
                
                  
                /* if(mid==1){
                  cout<<a<<" "<<sum<<endl;
                  }*/
            }
           /* if(mid==2){
                cout<<sum<<endl;
            }*/
           // cout<<sum<<endl;
            if(sum>=h){
                return true;
            }
            else{
                return false;
            }
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long h,n;
cin>>h>>n;
vector<long long> arr(n); 
map<long long,long long> mp;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
for (int i = 0; i < n; i++)
{
    long long x;
    cin>>x;
    mp[x]=mp[x]+arr[i];
}

/*for(auto x:mp){
    cout<<x.first<<" "<<x.second; 
    cout<<endl;
}
cout<<endl;*/
//cout<<f(0,mp,h)<<endl;
long long l=-1;
long long r=1e11;
while(l+1<r){
    long long mid=l+((r-l)/2);
   /* if(mid==2){
        cout<<f(2,mp,h)<<endl;
    }*/
    if(f(mid,mp,h)){
              r=mid;  
    }
    else{
            l=mid;   
    }
}

cout<<(r+1)<<endl;
}
return 0;
}