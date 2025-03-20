#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long a;
cin>>a;

//b--> any of the 1......a-1

long long x=1;
long long p=a;
long long y=1;
while(a>1){
    x++;
    y=y*2;
    a=a/2;
}
//cout<<y<<endl;
//cout<<"x="<<x<<endl;
if(p==(2*y-1)){
long long n=2*y-1;
//cout<<"n="<<n<<endl;
long long maxi=-1;
for (long long i = 1; i*i<=n; i++)
{
    if(n%i==0){
        if(i!=p){
        maxi=max(maxi,i);
        }
        if(n/i!=p){
        maxi=max(maxi,n/i);
        }
    }
}
cout<<maxi<<endl;
}
else{
    cout<<2*y-1<<endl;
}

}
return 0;
}