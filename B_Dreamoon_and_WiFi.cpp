#include <bits/stdc++.h>
using namespace std;
long long fact(long long n)
{
      if(n==0)
      return 1;
    long long res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}

long long nCr(long long n, long long r)
{
    return (fact(n) / (fact(r) * fact(n - r)));
}


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
string s,t;
cin>>s>>t;


long long dest=0;


for (int i = 0; i <s.size(); i++)
{
    if(s[i]=='+'){
        dest++;
    }
    else{
        dest--;
    }
}

long long possible=0;
long long count=0;
for (int i = 0; i < t.size(); i++)
{
    if(t[i]=='+'){
        possible++;
    }
    if(t[i]=='-'){
        possible--;
    }
    if(t[i]=='?'){
        count++;
    }
}
long long need=abs(dest-possible);
//cout<<possible<<endl;
long long rem=count-need;
//cout<<rem<<endl;
if(rem%2!=0 || rem<0){
    cout<<0<<endl;
}
else{
long long can=nCr(count,need+(rem/2));
long long total=1<<count;
double ans=can/(double)total;
cout<<fixed<<setprecision(12)<<ans<<endl;
    

}





return 0;
}