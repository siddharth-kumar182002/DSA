#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n,k;
    cin>>n>>k;
    if(k%2!=0){
        cout<<1<<endl;
    }
    else{
        long long ans=0;

        while(k%2==0){
            k=k/2;
            ans=ans+1;
            //cout<<ans<<endl;
        }
        cout<<ans+1<<endl;
    }
return 0;
}