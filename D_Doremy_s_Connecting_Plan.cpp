#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,c;
cin>>n>>c;
vector<long long> arr(n+1);
for (int i = 1; i <=n; i++)
{
    cin>>arr[i];
}

long long currsum=arr[1];
long long consum=currsum;
long long f=0;
for (int i = 2; i <=n; i++)
{
    currsum+=arr[i];
      if((consum+arr[i])>=i*c){
        if(i==n){
            f=1;
        }
        consum=currsum;
      }
}

if(f==1){
    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}
}
return 0;
}