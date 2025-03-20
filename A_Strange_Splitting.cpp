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
vector<long long > arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
if(arr[0]==arr[n-1]){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
    string ans="";
    long long temp=n;
    while(temp--){
        ans+="R";
    }
    ans[1]='B';
    //ans[n-1]='B';
    cout<<ans<<endl;
}

}
return 0;
}