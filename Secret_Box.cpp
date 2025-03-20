#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long x,y,z,k;
cin>>x>>y>>z>>k;
long long maxi=-1;
for (long long i = 1; i <=x; i++)
{
    for (long long j = 1; j <=y; j++)
    {
        long long a=i;
        long long b=j;
        if((k%(a*b))==0){
            long long c=k/(a*b);
            if(c<=z){
            long long xr=x-a+1;
            long long yr=y-b+1;
            long long zr=z-c+1;
            maxi=max(maxi,(xr*yr*zr));
            }
            
        }
    }
    
}
if(maxi==-1){
    cout<<0<<endl;
}
else{
    cout<<maxi<<endl;
}

}
return 0;
}