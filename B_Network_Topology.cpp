#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,m;
cin>>n>>m;
vector<long long> indegree(n,0);
for (int i = 0; i < m; i++)
{
    long long a,b;
    cin>>a>>b;
    indegree[a-1]++;
    indegree[b-1]++;
}
sort(indegree.begin(),indegree.end());

if(indegree[0]==indegree[n-1] && indegree[0]==2){
    cout<<"ring topology"<<endl;
    return 0;
}
if(indegree[0]!=indegree[n-1]){
    if(indegree[n-1]==n-1 && indegree[n-2]==1){
        cout<<"star topology"<<endl;
        return 0;
    }
    if(indegree[n-1]==2 && indegree[2]==2 && indegree[0]==1 && indegree[1]==1){
        cout<<"bus topology"<<endl;
        return 0;
    }
}

cout<<"unknown topology"<<endl;

return 0;
}