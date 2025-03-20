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
vector<long long> arr(n);
long long sum=0;
long long y=0;
for (int i = 0; i <n; i++)
{
    cin>>arr[i];
    sum+=arr[i];
    y=y^arr[i];
}
if(sum%2==0){
    cout<<2<<endl;
cout<<y<<" "<<(sum+y)<<endl;
}
else{
    sum++;
    y=y^1;
   cout<<3<<endl;
    cout<<1<<" "<<y<<" "<<(sum+y)<<endl;
}



}
return 0;
}