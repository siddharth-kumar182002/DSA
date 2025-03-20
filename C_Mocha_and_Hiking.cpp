#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n;
cin>>n;


vector<int> a(n);
for(auto &x:a){
    cin>>x;
}

int flag=0;
if(a[0]==1){
    cout<<n+1<<" ";
    for (int i = 1; i <=n; i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    flag=1;
    
}
else if(a[n-1]==0){
     for (int i = 1; i <=n; i++)
 {
     cout<<i<<" ";
 }
 cout<<n+1<<endl;
 flag=1;
}
else{
     for (int i = 0; i < n-1; i++)
 {
     if(a[i]==0 && a[i+1]==1){
         for (int j = 1; j <=i; j++)
 {
     cout<<j<<" ";
 }
 cout<<n+1<<" ";
  for (int j =i+1 ; j <=n; j++)
 {
     cout<<j<<" ";
 }
 cout<<endl;
 flag=1;
 break;
 
     }
 }
 
}


if(flag!=1){
    cout<<-1<<endl;
}
}
return 0;
}