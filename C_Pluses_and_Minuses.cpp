#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
string s;
cin>>s;
long long curr=0;
long long res=0;
for(int i=0;i<s.size();i++){
         if(s[i]=='+'){
            curr++;
         }
         else{
            curr--;
         }
         if(curr<0){
            res=res+(i+1);
            curr++;
         }
}
res=res+s.size();
cout<<res<<endl;
}
return 0;
}