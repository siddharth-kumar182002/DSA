#include <bits/stdc++.h>
using namespace std;

void f(long long i,long long j,long long p,long long q,long long a,long long b,vector<string> &arr){
    if(arr[i][j]=='1'){
        arr[i][j]='0';
    }
    else{
        arr[i][j]='1';
    }
     if(arr[p][q]=='1'){
        arr[p][q]='0';
    }
    else{
        arr[p][q]='1';
    }
     if(arr[a][b]=='1'){
        arr[a][b]='0';
    }
    else{
        arr[a][b]='1';
    }
    return ;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,m;
cin>>n>>m;
vector<string> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

vector<vector<long long>> ans;

for (int i = 0; i < n-1; i++)
{
    vector<long long> temp;
    for (int j = 0; j < m-1; j++)
    {
        temp.clear();
        if(arr[i][j]=='1'){
              temp.push_back(i);
               temp.push_back(j);
               temp.push_back(i+1);
               temp.push_back(j);
               temp.push_back(i+1);
               temp.push_back(j+1);
               f(i,j,i+1,j,i+1,j+1,arr);
               ans.push_back(temp);
        }
        
    }
    
}


  vector<long long> temp;
for (int i = 0; i < n-1; i++)
{
  
    temp.clear();
    if(arr[i][m-1]=='1' && arr[i+1][m-1]=='1'){
              temp.push_back(i+1);
               temp.push_back(m-1);
               temp.push_back(i+1);
               temp.push_back(m-2);
               temp.push_back(i);
               temp.push_back(m-2);
               f(i+1,m-1,i+1,m-2,i,m-2,arr);  
          ans.push_back(temp);
          temp.clear();
               temp.push_back(i);
               temp.push_back(m-1);
               temp.push_back(i);
               temp.push_back(m-2);
               temp.push_back(i+1);
               temp.push_back(m-2);
               f(i,m-1,i,m-2,i+1,m-2,arr);
               ans.push_back(temp);
    }
    if(arr[i][m-1]=='1' && arr[i+1][m-1]=='0'){
              temp.push_back(i);
               temp.push_back(m-1);
               temp.push_back(i);
               temp.push_back(m-2);
               temp.push_back(i+1);
               temp.push_back(m-2);
               f(i,m-1,i,m-2,i+1,m-2,arr);  
          ans.push_back(temp);
          temp.clear();
               temp.push_back(i);
               temp.push_back(m-2);
               temp.push_back(i);
               temp.push_back(m-1);
               temp.push_back(i+1);
               temp.push_back(m-1);
               f(i,m-2,i,m-1,i+1,m-1,arr);
               ans.push_back(temp);
               temp.clear();
               temp.push_back(i);
               temp.push_back(m-1);
               temp.push_back(i+1);
               temp.push_back(m-1);
               temp.push_back(i+1);
               temp.push_back(m-2);
               f(i,m-1,i+1,m-1,i+1,m-2,arr);
               ans.push_back(temp);
    }
    
}
for (int j = 0; j <m-1; j++)
{
  
    temp.clear();
    if(arr[n-1][j]=='1' && arr[n-1][j+1]=='1'){
              temp.push_back(n-1);
               temp.push_back(j);
               temp.push_back(n-2);
               temp.push_back(j);
               temp.push_back(n-2);
               temp.push_back(j+1);
               f(n-1,j,n-2,j,n-2,j+1,arr);  
          ans.push_back(temp);
          temp.clear();
               temp.push_back(n-2);
               temp.push_back(j);
               temp.push_back(n-2);
               temp.push_back(j+1);
               temp.push_back(n-1);
               temp.push_back(j+1);
               f(n-2,j,n-2,j+1,n-1,j+1,arr);
               ans.push_back(temp);
    }
     if(arr[n-1][j]=='1' && arr[n-1][j+1]=='0'){
              temp.push_back(n-1);
               temp.push_back(j);
               temp.push_back(n-2);
               temp.push_back(j);
               temp.push_back(n-2);
               temp.push_back(j+1);
               f(n-1,j,n-2,j,n-2,j+1,arr);  
          ans.push_back(temp);
          temp.clear();
               temp.push_back(n-2);
               temp.push_back(j);
               temp.push_back(n-1);
               temp.push_back(j);
               temp.push_back(n-1);
               temp.push_back(j+1);
               f(n-2,j,n-1,j,n-1,j+1,arr);
               ans.push_back(temp);
               temp.clear();
               temp.push_back(n-2);
               temp.push_back(j+1);
               temp.push_back(n-1);
               temp.push_back(j);
               temp.push_back(n-1);
               temp.push_back(j+1);
               f(n-2,j+1,n-1,j,n-1,j+1,arr);
               ans.push_back(temp);
    }
    
}

if(arr[n-1][m-1]=='1'){
             temp.clear();
               temp.push_back(n-1);
               temp.push_back(m-1);
               temp.push_back(n-1);
               temp.push_back(m-2);
               temp.push_back(n-2);
               temp.push_back(m-2);
               f(n-1,m-1,n-1,m-2,n-2,m-2,arr);
               ans.push_back(temp);
               temp.clear();
               temp.push_back(n-2);
               temp.push_back(m-2);
               temp.push_back(n-2);
               temp.push_back(m-1);
               temp.push_back(n-1);
               temp.push_back(m-1);
               f(n-2,m-2,n-2,m-1,n-1,m-1,arr);
               ans.push_back(temp);
               temp.clear();
               temp.push_back(n-2);
               temp.push_back(m-1);
               temp.push_back(n-1);
               temp.push_back(m-1);
               temp.push_back(n-1);
               temp.push_back(m-2);
               f(n-2,m-1,n-1,m-1,n-1,m-2,arr);
               ans.push_back(temp);
}
// for(auto x:arr){
//     cout<<x<<endl;
// }
// cout<<endl;
cout<<ans.size()<<endl;
for(auto x:ans){
    for(auto y:x){
        cout<<(y+1)<<" ";
    }
    cout<<endl;
}



}
return 0;
}