#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}
int main() {
int t;
cin>>t;
while(t--){
int n,m;
cin>>n>>m;
if(isPrime(m)){
vector<long long > arr[n];
long long x=1;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        arr[i].push_back(x);
        x++;
    }
    
}

for (int i = n-2; i >=0 ; i-=2)
{
    for (int j = 0; j < m; j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

for (int i = n-1; i >=0; i-=2)
{
    for (int j = 0; j < m; j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;

}
else{
    int x=1;
   for (int i = 1; i <=n; i++)
   {
      for (int j = 1; j <=m; j++)
      {
        cout<<x<<" ";
        x++;
      }
      cout<<endl;
      
   }
   cout<<endl;

}
}
return 0;
}