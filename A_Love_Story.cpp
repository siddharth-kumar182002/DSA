#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
string s;
cin>>s;
int count=0;
string v="codeforces";
int k=9;
while(k>=0){
    if(v[k]!=s[k]){
        count++;
    }
    k--;
}
cout<<count<<endl;

}
return 0;
}