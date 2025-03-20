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
long long count=0;
long long p=0;
if(s[0]=='0'){
    count++;
}
for (int i = 1; i < n; i++)
{
    if(s[i]=='0'){
        count++;
    }

    if(s[i]!=s[i-1]){
        p=1;
        break;
    }
}
if(p==1 || count>(n-count)){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

}
return 0;
}