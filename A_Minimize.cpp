#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long a,b;
cin>>a>>b;
long long mini=1e16;
for (int i = a; i <=b; i++)
{
    mini=min(mini,((i-a)+(b-a)));
}

cout<<mini<<endl;

}
return 0;
}