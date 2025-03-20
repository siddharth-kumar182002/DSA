#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;

vector<string> arr(2);
cin>>arr[0];
cin>>arr[1];

queue<pair<int,int>> q;
long long ind=-1;
for (int i = 0; i < n; i++)
{
      if(arr[0][i]=='W' || arr[1][i]=='W'){
        ind=i;
        break;
      }
}
if(ind==-1){
    cout<<"YES"<<endl;
    continue;
}

if(arr[0][ind]=='B'){
    q.push({0,ind});
}
else{
    q.push({1,ind});
}
int f=0;
while(!q.empty()){
    auto it=q.front();
    q.pop();

    long long i=it.first;
    long long j=it.second;
//cout<<"i="<<i<<" "<<"j="<<j<<" "<<endl;
//out<<arr[!i][j]<<endl;
    if(arr[!i][j]=='B'){
        q.push({!i,j});
        arr[i][j]='W';
        continue;
    }
    if(j<n-1 && arr[i][j+1]=='B'){
        q.push({i,j+1});
        arr[i][j]=='W';
    
    }
    if(j!=n-1 && q.empty()){
        f=1;
        cout<<"NO"<<endl;
        break;
    }
}
if(f!=1){
    cout<<"YES"<<endl;
}



}
return 0;
}