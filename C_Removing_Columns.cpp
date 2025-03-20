#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,m;
cin>>n>>m;
vector<string> arr(n);
vector<long long> del(m,0);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
long long ans=0;

for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n-1; j++)
    {
        if(arr[j][i]>arr[j+1][i]){
            int f=0;
              for (int k = 0; k < i; k++)
              {
                      if(arr[j][k]<arr[j+1][k] && del[k]!=1){
                        f=1;
                        break;
                      }
              }
              if(f==0){
                ans++;
                del[i]=1;
                break;
              }
              
        }

    }
    //cout<<"i="<<i<<" "<<ans<<endl;
}
cout<<ans<<endl;


return 0;
}