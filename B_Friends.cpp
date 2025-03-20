#include <bits/stdc++.h>
using namespace std;
int main() {
long long m;
cin>>m;
vector<vector<long long >> arr(5,vector<long long> (5,0));

for (int i = 0; i < m; i++)
{
    long long x,y;
    cin>>x>>y;

    arr[x-1][y-1]=1;
    arr[y-1][x-1]=1;
}
int f=0;

for (int i = 0; i < 5; i++)
{
    for (int j = i+1; j<5; j++)
    {
        for (int k = j+1; k < 5; k++)
        {
            if ((arr[i][j] && arr[i][k] && arr[j][k]) || (!arr[i][j] && !arr[i][k] && !arr[j][k])){
                cout<<"WIN"<<endl;
               // cout<<"i="<<i<<" "<<"j="<<j<<" "<<"k="<<k<<endl;
                f=1;
                break;
            }
        }
        if(f==1){
                break;
            }
        
    }
    if(f==1){
                break;
            }
    
}

if(f!=1){
    cout<<"FAIL"<<endl;
}

return 0;
}