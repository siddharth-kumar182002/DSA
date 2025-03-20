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
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
long long one=0;
for (int i = 0; i < n; i++)
{
    long long x;
    cin>>x;
    if(x==1){
        one++;
    }
}
if(is_sorted(arr.begin(),arr.end())){
    cout<<"Yes"<<endl;
    continue;
}

if(one==0 || one==n){
    cout<<"No"<<endl;
}
else{
    cout<<"Yes"<<endl;
}


}
return 0;
}