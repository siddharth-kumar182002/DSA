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
set<long long> ans;
ans.insert(1);
if(d%3==0){
    ans.insert(3);
    if(n>=3){
        ans.insert(9);
    }
}
if(d%5==0){
    ans.insert(5);
}
if(d%7==0){
    ans.insert(7);
}
if(d%9==0){
    ans.insert(9);
}
if(n>=3){
    ans.insert(3);
    ans.insert(7);
}
if(n>=6){
    ans.insert(9);
}
for(auto x:ans){
    cout<<x<<" ";
}
cout<<endl;
}
return 0;
}