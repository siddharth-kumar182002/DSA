#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n,t;
cin>>n>>t;

long long arr[2][n];

for (int i = 0; i < 2; i++)
{
    for (int j = 0; j <n; j++)
    {
        cin>>arr[i][j];
    }
    
}
long long ans=-1;
int prv=ans;
int answ=-1;
for (int i = 0; i < n; i++)
{
    if((t-i)>=arr[0][i]){
    ans=max(ans,arr[1][i]);
    if(prv!=ans){
    answ=i+1;
    }
    prv=ans;
    }
}

cout<<answ<<endl;
}
return 0;
}