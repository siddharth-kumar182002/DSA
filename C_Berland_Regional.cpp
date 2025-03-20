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
vector<vector<long long>> arr(n);
vector<long long > brr(n);
for (int i = 0; i < n; i++)
{
    cin>>brr[i];
}
for (int i = 0; i <n; i++)
{
    long long  x;
    cin>>x;
    arr[brr[i]-1].push_back(x);

}

for (int i = 0; i < n; i++)
{
    sort(arr[i].begin(),arr[i].end());
 
}
vector<long long> ans(n,0);
for (int i = 0; i < n; i++)
{
    for (int j = 1; j < arr[i].size(); j++)
    {
        arr[i][j]=arr[i][j]+arr[i][j-1];
        
    }
  
    
    for (int k = 1; k <=arr[i].size(); k++)
    {
        long long x=(arr[i].size())%k;
        if(x>0){
        ans[k-1]=ans[k-1]+(arr[i].back()-arr[i][x-1]);
        }
        else{
            ans[k-1]=ans[k-1]+arr[i].back();
        }
    }
    
}

for(auto x:ans){
    cout<<x<<" ";
}
cout<<endl;

}
return 0;
}