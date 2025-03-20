#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
long long n,m;
cin>>n>>m;
vector<long long> degree(n+1,0);
for (int i = 0; i < m; i++)
{
    long long a,b;
    cin>>a>>b;
    degree[a]++;
    degree[b]++;

}
map<long long,long long> mp;
for (int i = 1; i <=n; i++)
{
    mp[degree[i]]++;
    
}

vector<long long> mp1;
for(auto x:mp){
    mp1.push_back(x.second);
}
sort(mp1.begin(),mp1.end());
if(mp1.size()==3){
    cout<<mp1[1]<<" "<<mp1[2]/mp1[1]<<endl;
}
else{
    cout<<mp1[0]-1<<" "<<mp1[1]/(mp1[0]-1)<<endl;
}

}
return 0;
}