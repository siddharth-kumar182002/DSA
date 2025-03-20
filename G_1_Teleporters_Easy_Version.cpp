#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n,c;
cin>>n>>c;
long long arr[n+1];
vector<long long> v;

for (int i = 1; i <=n; i++)
{
    cin>>arr[i];
    v.push_back(arr[i]+i);
}
sort(v.begin(),v.end());
long long cnt=0;
long long sum=0;
for (auto x : v){
     sum=sum+x;
     if(sum<=c){
        cnt++;
     }
     else{
        break;
     }
}
cout<<cnt<<endl;







}
return 0;
}