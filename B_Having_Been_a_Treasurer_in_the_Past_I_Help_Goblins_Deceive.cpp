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
string s;
cin>>s;
long long up=0;
long long down=0;
for(int i=0;i<n;i++){
    if(s[i]=='_'){
        down++;
    }
    else{
        up++;
    }
}
long long ans=0;
if(up%2==0){
ans=ans+down*(up/2)*(up/2);
}
else{
    ans=ans+down*(up/2)*((up/2)+1);
}
cout<<ans<<endl;
}
return 0;
}