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
if(k%2==0){
    cout<<3<<endl;
    cout<<1<<" "<<k<<" "<<(k+1)<<endl;
}
else{
    long long x=k-1;
    long long y=n-k;
    if(x>=2 && y>=2){
               cout<<5<<endl;
               cout<<1<<" "<<2<<" "<<k<<" "<<k+1<<" "<<n<<endl;
    }
    else if(x==1 && y==1){
                cout<<3<<endl;
                cout<<1<<" "<<k<<" "<<k+1<<endl;
    }
    else if(x==0 && y==0){
         cout<<1<<endl;
         cout<<1<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}
}
return 0;
}