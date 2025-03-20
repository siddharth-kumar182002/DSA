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
if(n%2==0){
    cout<<-1<<endl;
}
else{
    vector<long long> ans(n,-1);
long long x=1;
    for (int i = n/2; i < n; i++)
    {
        ans[i]=x;
        x++;
    }
    for (int i =0; i < n/2; i++)
    {
        ans[i]=x;
        x++;
    }
    for(auto x:ans){
        cout<<x<<" ";
    }
    cout<<Endl;
}
}
return 0;
}