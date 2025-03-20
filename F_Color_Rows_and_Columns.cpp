#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
vector<pair<long long,long long>> arr(n);
for (int i = 0; i < n; i++)
{
    long long x,y;
    cin>>x>>y;
    arr[i]={min(x,y),max(x,y)};
}

sort(arr.begin(),arr.end());
for(auto x:arr){
    cout<<x.first<<" "<<x.second<<" "<<endl;
}
cout<<endl;
long long ans=0;
long long count=0;
for (int i = 0; i <n; i++)
{
    long long x=(arr[i].first*arr[i].second);
    cout<<"x="<<x<<endl;
    cout<<arr[i].first<<" "<<arr[i].second<<endl;
    if((count+(arr[i].second)+(arr[i].first))<=k){
           ans=ans+arr[i].first*arr[i].second;
           count=count+arr[i].second+arr[i].first;
           cout<<"count"<<count<<endl;
           cout<<"up="<<ans<<endl;
    }
    else{
        cout<<"HI"<<endl;
         long long y=k-count;
         cout<<"y="<<y<<endl;
     if(arr[i].second>y){
        ans=ans+(y*arr[i].first);
     }
     else{
        ans=ans+(arr[i].second-1)*(arr[i].first);
        cout<<"down"<<ans<<endl;
        y=y-(arr[i].second-1);
         cout<<"yin="<<y<<endl;
        if(y==arr[i].first){
            ans=ans+(arr[i].first)+1;
        }
        else{
            ans=ans+y;
        }
     }
     cout<<ans<<endl;
     count=k;
         break;
    }
}

if(count<k){
    cout<<-1<<endl;
}
else{

cout<<ans<<endl;
}


}
return 0;
}