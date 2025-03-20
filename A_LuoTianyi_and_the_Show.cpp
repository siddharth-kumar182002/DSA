#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
    long long n,m;
    cin>>n>>m;

    vector<long long > arr(m+1,0);
    long long count1=0;
    long long count2=0;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin>>x;
        if(x>0){
        arr[x]=1;
        }
        if(x==-1){
            count1++;
        }
        if(x==-2){
            count2++;
        }
    }

    vector<long long > pff(m+1,0);
    pff[1]=arr[1];
    vector<long long> sff(m+1,0);
    sff[m]=arr[m];
    for (int i = 2; i <=m; i++)
    {
        pff[i]=pff[i-1]+arr[i];
    }
    for (int i = m-1; i >=0; i--)
    {
        sff[i]=sff[i+1]+arr[i];
    }
     long long ans=-1e9;
    
    /* for(auto x:pff){
        cout<<x<<" ";
     }
     cout<<endl;
     for(auto x:sff){
        cout<<x<<" ";
     }
     cout<<endl;*/
     
   for (long long i = 1; i <=m; i++)
   {
    long long mini=-1e9;
    if(i==1 || i==m){
       mini=max(min(m,count2+pff[m]),min(m,count1+pff[m]));
    } 
     else if(arr[i]>0){
        mini=min(m,1+(min(i-1,count1+pff[i-1])+min(m-i,count2+sff[i+1])));
     }
       ans=max(ans,mini);
   }
    
    cout<<ans<<endl;
}
return 0;
}