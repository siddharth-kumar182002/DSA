#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
long long f=0;
for (int i = 0; i < n; i++)
{
    long long x;
    cin>>x;
    if(x==k){
        f=1;
    }
}
if(f==1){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

}
return 0;
}