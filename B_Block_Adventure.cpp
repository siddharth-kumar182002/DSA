#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n,m,k;
cin>>n>>m>>k;
vector<long long> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
int f=0;
for (int i = 0; i < n-1; i++)
{
   m=m+arr[i]-max(0LL,arr[i+1]-k);
    if(m<0){
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