#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,d;
cin>>n>>d;
vector<long long> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
sort(arr.begin(),arr.end());
if(arr[n-1]<=d){
    cout<<"YES"<<endl;
    continue;
}
else{
    if(n>=2 && (arr[0]+arr[1])<=d){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
}
return 0;
}