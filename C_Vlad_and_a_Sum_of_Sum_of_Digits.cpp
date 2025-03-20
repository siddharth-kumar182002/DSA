#include <bits/stdc++.h>
using namespace std;
long long f(long long i){


    long long sum=0;
    while(i>0){
        sum=sum+(i%10);
        i=i/10;
    }

    return sum;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
vector<long long> ans(2*1e5+1,0);
for (long long i = 1; i <=(2*1e5); i++)
{
    ans[i]=ans[i-1]+f(i);
}
while(t--){
long long n;
cin>>n;



cout<<ans[n]<<endl;

}
return 0;
}