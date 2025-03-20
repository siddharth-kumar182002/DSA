#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long x,y;
cin>>x>>y;

    long long ny=-x;
    if(y-x>=(ny-1)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
return 0;
}