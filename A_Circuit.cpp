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
vector<long long> arr(2*n);
long long zero=0;
long long one=0;
for (int i = 0; i <2*n; i++)
{
    cin>>arr[i];
    if(arr[i]==0){
        zero++;
    }
    else{
        one++;
    }
}
// cout<<"zero="<<zero<<endl;
// cout<<"one"<<one<<endl;
long long remz=zero%2;
long long remo=one%2;
long long mini=max(remz,remo);
long long maxi=min(zero,one);
cout<<mini<<" "<<maxi<<endl;


}
return 0;
}