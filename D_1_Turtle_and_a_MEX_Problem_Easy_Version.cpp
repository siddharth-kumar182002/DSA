#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,m;
cin>>n>>m;
vector<vector<long long>> arr(n);
long long ans=-1;
for (int i = 0; i < n; i++)
{
    long long x;
    cin>>x;
    for (int j = 0; j <x; j++)
    {
        long long y;
        cin>>y;
        arr[i].push_back(y);
    }
}

for (int i = 0; i < n; i++)
{
    long long x=arr[i].size();
     sort(arr[i].begin(),arr[i].end());
     long long maxi=0;
    
     for (int j= 0; j < x; j++)
     {
        if(arr[i][j]==maxi){
            maxi++;
            continue;
        }
        else if(arr[i][j]<maxi){
           continue;
        }
        else{
           
            break;
        }
       
     }
  
     arr[i].push_back(maxi);
     sort(arr[i].begin(),arr[i].end());
       maxi=0;
   
     for (int j= 0; j <=x; j++)
     {
    
        if(arr[i][j]==maxi){
            maxi++;
            continue;
        }
        else if(arr[i][j]<maxi){
           continue;
        }
        else{
             
            break;
        }
       
     }
    

     ans=max(maxi,ans);
 
    
}
long long ind=min(ans,m);
long long sum=0;
sum=sum+(((m)*(m+1))/2);

sum=sum-(((ind)*(ind+1))/2);
sum=sum+(ind+1)*ans;

cout<<sum<<endl;
}
return 0;
}