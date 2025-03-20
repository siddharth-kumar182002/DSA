#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int m;
cin>>m;
map<int,int> mp,ans;
for (int i = 1; i <=m; i++)
{
   int n;
   cin>>n;
   while(n--){
    int temp;
    cin>>temp;
    mp[temp]=i;
   }
   
}

for(auto it:mp){
    ans[it.second]=it.first;
}

if(ans.size()<m){
    cout<<-1<<endl;
}
else{
    for(auto it:ans){
        cout<<it.second<<" ";
    }
    cout<<endl;
}


}
return 0;
}