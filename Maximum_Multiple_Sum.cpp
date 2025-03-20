#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
long long maxi=-1;
long long ans=-1;
for (int i = 2; i <=n; i++)
{
    long long sum=0;
    for (int j = 1; j*i<=n; j++)
    {
        sum=sum+j*i;
        //cout<<"j="<<j<<" "<<"i="<<i<<" "<<endl;
    }
    //cout<<sum<<endl;
    if(sum>=maxi){
        maxi=sum;
        ans=i;
    }
    
}
cout<<ans<<endl;

}
return 0;
}