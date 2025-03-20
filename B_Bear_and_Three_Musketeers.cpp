#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,m;
cin>>n>>m;
vector<set<long long>> arr(n+1);
for (int i = 0; i < m; i++)
{
    long long a,b;
    cin>>a>>b;
    arr[a].insert(b);
    arr[b].insert(a);
}
long long mini=1e9;
for (int i = 1; i <=n; i++)
{
    if(arr[i].size()>=2){
          for(auto it=arr[i].begin();it!=arr[i].end();it++){
            auto ch=it;
            if(arr[*it].size()<2){
                continue;
            }
         for (auto it1=ch++; it1!=arr[i].end(); it1++)
         {
            if(arr[*it1].size()<2){
                continue;
            }
            if(arr[*it1].count(*it)){
            mini=min(mini,(arr[i].size()+arr[*it].size()+arr[*it1].size()-6)*1LL);
            }
                
         }
         
          }
    }
}
if(mini==1e9){
    cout<<-1<<endl;
}
else{
    cout<<mini<<endl;
}

return 0;
}