#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
  int n;
    cin>>n;
    vector<int> v(n);
    int maxo=0;
    long long sum=0;
    for(auto &x:v){
        cin>>x;
        maxo=max(maxo,x);
        sum+=x;
    }
    long long k=max((long long)maxo,((sum+n-2)/(n-1)));
    cout<<(k*(n-1))-sum<<endl;
}
return 0;
}