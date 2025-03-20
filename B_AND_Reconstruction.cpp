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
    vector<long long> arr(n-1);
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    } 
    vector<long long> ans(n);
    ans[0]=(arr[0]);
    long long f=0;
    for(int i=1;i<n-1;i++){
        long long x=(arr[i]|arr[i-1]);
        ans[i]=x;
        long long ch=(ans[i]&ans[i-1]);
        if(ch!=arr[i-1]){
            f=1;
            break;
        }

    }
    ans[n-1]=(arr[n-2]);
    if(n-2>=0){
    long long ch=(ans[n-1]&ans[n-2]);
        if(ch!=arr[n-2]){
            f=1;
        }
    }
    if(f==1){
        cout<<-1<<endl;
    }
    else{
    for(auto x: ans){
        cout<<x<<" ";
    } 
    cout<<endl;
    }
}
return 0;
}