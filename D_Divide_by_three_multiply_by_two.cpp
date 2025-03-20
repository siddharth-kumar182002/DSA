#include <bits/stdc++.h>
using namespace std;

void dfs(long long i,vector<long long > &vis,vector<long long > &arr,vector<long long > &ans){
    
    for (int j = 0; j <arr.size(); j++)
    {
        if(!vis[j]){
              if((2*arr[i]==arr[j]) || ((arr[i]%3)==0 && (arr[i]/3)==arr[j])){
                   ans.push_back(arr[j]);
                   vis[j]=1;
                  
                   dfs(j,vis,arr,ans);
                   if(ans.size()==arr.size()){
                    break;
                   }
                      ans.pop_back();
                        vis[j]=0;
                    
              }
        }
    }

    return ;
    
}


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n;
cin>>n;
vector<long long> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

vector<long long> vis(n,0);
vector<long long > ans;
for (long long  i = 0; i <n; i++)
{
    ans.clear();
    vis[i]=1;
  
     ans.push_back(arr[i]);
    dfs(i,vis,arr,ans);
    vis[i]=0;

    if(ans.size()==n){
        break;
    }
}

for(auto x:ans){
    cout<<x<<" ";
}
cout<<endl;


return 0;
}