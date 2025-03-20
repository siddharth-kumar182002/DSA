
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t, n, m, i, j, ans;
    
    cin>>t;
    
    while(t--)
    {
        ans=0;
        
        cin>>n>>m;
        
        long long  first[n+1];
        
        for(i=0; i<=n; i++)
        {
            first[i]=n+1;
        }
        
        while(m--)
        {
            cin>>i>>j;
            
            if(i>j){
                swap(i, j);
            }
            
            first[i]=min(first[i], j);
        }
        
        for(i=n-1; i>=1; i--)
        {
            first[i]=min(first[i], first[i+1]);
        }
        
        for(i=1; i<=n; i++)
        {
            ans=ans+first[i]-i;
        }
        
        cout<<ans<<"\n";
    }
    return 0;
}