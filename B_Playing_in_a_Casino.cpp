#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n,m;
cin>>n>>m;
vector<long long> arr[m];
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        long long temp;
        cin>>temp;
        arr[j].push_back(temp);
    }
    
}

for (int i = 0; i < m; i++)
{
  sort(arr[i].begin(),arr[i].end());
}
long long ans=0;
for (int i = 0; i < m; i++)
{
    vector<long long> res(n,0);
    res[n-1]=arr[i][n-1];
    for (int j = n-2; j>=0; j--)
    {
        res[j]=res[j+1]+arr[i][j];
    }


    for (int k = 0; k < n-1 ; k++)
    {
        long long count;
        count=res[k+1]-(n-1-k)*arr[i][k];
        ans=ans+count;
    }
    
    
}
cout<<ans<<endl;

}
return 0;
}