#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);

long long n,s;
cin>>n>>s;
vector<long long> arr(n,1);
arr[n-1]+=(s-n);
if(((2*arr[n-1]-s)<=1)){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
    for(auto x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<(arr[n-1]-1)<<endl;
}

return 0;
}