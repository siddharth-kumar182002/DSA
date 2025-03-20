#include <bits/stdc++.h>
using namespace std;
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
vector<vector<long long>> ans(n,vector<long long> (n,-1));
for (int i = 0; i < n; i++)
{
    long long val=arr[i];
    long long x=i;
    long long y=i;
    while(y>=0 && x<n && arr[i]>0 && ans[x][y]==-1){
          ans[x][y]=val;
          arr[i]--;
           if(y>=0 && ans[x][y-1]==-1){
                y--;
                continue;
           }
           x++;
          
    }
    

}
for (int i = 0; i < n; i++)
{
    for (int j = 0; j <=i; j++)
    {
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
    
}


return 0;
}