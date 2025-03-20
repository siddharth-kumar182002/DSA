#include <bits/stdc++.h>
using namespace std;
long long f(long long n)
{
    if (n == 0)
        return 0;
 
    long long msb = 0;
    n = n / 2;
    while (n != 0) {
        n = n / 2;
        msb++;
    }
 
    return msb;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long a,b,r;
cin>>a>>b>>r;
if(a>b){
    swap(a,b);
}
long long count=0;
long long it=f(b);
//cout<<it<<endl;

while(true){
    if(!((a&(1LL<<it))>>it) && ((b&(1LL<<it))>>it)){
        it--;
        break;
    }
    it--;
    if(it<0){
        break;
    }
}
for (int i = it; i>=0; i--)
{
    if(!((a&(1LL<<i))>>i) && ((b&(1LL<<i))>>i)){
        if((count+(1LL<<i))<=r){
            count=count+(1LL<<i);
            a=(a+(1LL<<i));
            b=(b-(1LL<<i));
        }
        else{
            continue;
        }
    }
}



//cout<<count<<endl;
//cout<<b<<endl;
cout<<abs(a-b)<<endl;

}
return 0;
}