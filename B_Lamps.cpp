#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<priority_queue<long long>> arr(n+1);
for (int i = 0; i < n; i++)
{
    long long a,b;
    cin>>a>>b;
    arr[a].push(b);
}
//cout<<arr[1].top();

long long ans=0;
for (int i = 0; i <=n; i++)
{
    if(!arr[i].empty()){
        long long y=i;
          while(y--){
            ans=ans+arr[i].top();
            arr[i].pop();
            if(arr[i].empty()){
                break;
            }
          }
    }
}
cout<<ans<<endl;


}
return 0;
}