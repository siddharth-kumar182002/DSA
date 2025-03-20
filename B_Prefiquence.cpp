#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,m;
cin>>n>>m;
string a,b;
cin>>a>>b;
long long j=0;
for (int i = 0; i < b.size(); i++)
{
    if(j>=a.size()){
        break;
    }
    if(b[i]==a[j]){
        j++;
    }
}

cout<<j<<endl;
}
return 0;
}