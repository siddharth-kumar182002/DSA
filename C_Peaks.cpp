#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,m;
cin>>n>>m;
vector<set<long long >> arr(n+1);
vector<long long > h(n);
for (int i = 0; i <n; i++)
{
    cin>>h[i];
}
for (int i = 0; i < m; i++)
{
    long long a,b;
    cin>>a>>b;
    arr[a].insert(h[b-1]);
    arr[b].insert(h[a-1]);

}

long long ans=0;
for (int i = 1; i <=n; i++)
{
    if(arr[i].size()==0){
        ans++;
        
    }
    else{
        if((h[i-1])>(*(--arr[i].end()))){
            ans++;
        }
    }
   // cout<<"ans="<<ans<<" "<<"i="<<i<<endl;
}
cout<<ans<<endl;
return 0;
}