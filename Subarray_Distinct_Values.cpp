#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
string s,t;
cin>>s>>t;
long long m=s.size();
        long long n=t.size();
        vector<long long> cnt(26,0);
        //vector<long long> window(26,0);
        long long uni=0;
       for(int i=0;i<n;i++){
           // cout<<(t[i]-'A')<<endl;
            cout<<i<<endl;
            cout<<cnt[t[i]-'A']<<endl;
        }
return 0;
}