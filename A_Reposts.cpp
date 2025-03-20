#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
vector<vector<string>> v(n,vector<string>(3));
for(int j=0;j<n;j++){
for(int i=0;i<3;i++){
    cin>>v[j][i];
 transform(v[j][i].begin(), v[j][i].end(), v[j][i].begin(), ::toupper);
}
}

map<string,int> m;
m[v[0][2]]=1;
int maxi=-1;
int ans;
for (int i = 0; i < n; i++)
{
    m[v[i][0]]=m[v[i][2]]+1;
    maxi=max(maxi,m[v[i][0]]);
}
cout<<maxi<<endl;
return 0;
}