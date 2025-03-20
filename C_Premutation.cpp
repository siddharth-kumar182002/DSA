#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n][n-1];
vector<int> count(n+1,0);
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n-1; i++)
    {
        cin>>arr[i][j];
    }
count[arr[i][0]]++;
    
}

int first=0;
for (int i = 1; i <=n; i++)
{
    if(count[i]==n-1){
        first=i;
    }
}
cout<<first<<" ";
for (int i = 0; i <n; i++)
{
    if(first!=arr[i][0]){
    for (int j = 0; j < n-1; j++)
    {
        cout<<arr[i][j]<<" ";
    }
    break;
    }
    else{
        continue;
    }
    
}
cout<<endl;

}
return 0;
}