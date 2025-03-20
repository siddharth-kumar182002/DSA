#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int> arr(n);
vector<int> ans(n+1,0);
vector<int> ind(n+1,-1);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
if(ind[arr[i]]==-1){
ind[arr[i]]=i;
ans[arr[i]]++;
}
else{
    if(((i-ind[arr[i]]-1)%2)==0){
        ans[arr[i]]++;
    }
    ind[arr[i]]=i;
}
}

for (int i = 1; i <=n; i++)
{
    cout<<ans[i]<<" ";
    
     }
cout<<endl;


}
return 0;
}