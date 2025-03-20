#include <bits/stdc++.h>
using namespace std;
int main() {
long long n,q;
cin>>n>>q;
vector<vector<long long>> arr(n+1,vector<long long>(n+1));

for (int i = 1; i <=n; i++)
{
    for (int j = 1; j <=n; j++)
    {
        char x;
        cin>>x;
        if(x=='*'){
            arr[i][j]++;
        }
    }
    
}
/*
for (auto &x:arr)
{
    for(auto &y:x){
        cout<<y<<" ";
    }
    cout<<endl;
}*/
//cout<<"hehe"<<endl;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        arr[i+1][j+1]=arr[i+1][j+1]+arr[i+1][j]+arr[i][j+1]-arr[i][j];
        
    }
    
}
/*
for (auto &x:arr)
{
    for(auto &y:x){
        cout<<y<<" ";
    }
    cout<<endl;
}*/
//y1x1y2x2
while(q--){
long long x1,y1,x2,y2;
cin>>x1>>y1>>x2>>y2;
long long ans=0;
ans=arr[x2][y2]-arr[x2][y1-1]-arr[x1-1][y2]+arr[x1-1][y1-1];
cout<<ans<<endl;
}

return 0;
}