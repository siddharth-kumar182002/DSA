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
for (int i = 0; i < s.size(); i++)
{
    if(s[i]=='U'){
        count++;
    }
}

if(count%2==0){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}

}
return 0;
}