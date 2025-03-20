#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    map<long long,long long> m;
    set<long long> b;

    for (int i = 0; i < n; i++)
    {
        long long temp;
        cin>>temp;
        m[temp]++;
        b.insert(temp);
        b.insert(temp+1);

    }
long long last=0;
long long res=0;
long long y=0; 
    for(auto &x:b){
        long long curr=m[x];
        res=res+max(y,curr-last);
        last=curr;

    }
cout<<res<<endl;
}
return 0;
}