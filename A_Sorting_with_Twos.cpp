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
vector<long long > arr(n+1);
for (int i = 1; i <=n; i++)
{
    cin>>arr[i];
}
if(n==1 || n==2){
    cout<<"YES"<<endl;
    continue;
}
long long f=0;
for (int i = 3; i <=n; i++)
{
      if(__builtin_popcount(i-1)==1){
        continue;
      }
      if(arr[i-1]>arr[i]){
        cout<<"NO"<<endl;
        f=1;
        break;
      }
}
if(f!=1){
    cout<<"YES"<<endl;
}

}
return 0;
}