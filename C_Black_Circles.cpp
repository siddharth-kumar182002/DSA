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
vector<pair<long long,long long>> arr(n);
for (int i = 0; i < n; i++)
{
    long long x,y;
    cin>>x>>y;
    arr[i]={x,y};
}

long long x,y,c,d;
cin>>x>>y>>c>>d;

long long dist=(x-c)*(x-c)+(y-d)*(y-d);
long long f=0;
for (int i = 0; i < n; i++)
{
    long long ndist=(arr[i].first-c)*(arr[i].first-c)+(arr[i].second-d)*(arr[i].second-d);
    if(ndist<=dist){
        f=1;
        break;
    }
}
if(f==1){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}
 
}
return 0;
}