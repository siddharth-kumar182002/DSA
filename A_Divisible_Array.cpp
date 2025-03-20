#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
if(n%2!=0){
    for (int i = 1; i <=n; i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
else{

    for (int i = 1; i <=n; i++)
    {if(i==n/2){
        cout<<2*i<<" ";
        continue;
    }
        cout<<i<<" ";
    }
    cout<<endl;

}
}
return 0;
}