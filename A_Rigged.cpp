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
long long s1,e1;
cin>>s1>>e1;
n--;
long long w=1;
while(n--){
    long long s,e;
    cin>>s>>e;
if(s>=w && e>=e1){
   w=s+1;
}
}
if(w>=s1){
    cout<<-1<<endl;
}
else{
    cout<<w<<endl;
}
}
return 0;
}