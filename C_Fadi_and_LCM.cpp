#include <bits/stdc++.h>
using namespace std;
vector<long long > primeFactors(long long  n)
{
  vector<long long> v;
  if (n % 2 == 0) {
    v.push_back(2);
    while (n % 2 == 0)n /= 2;
  }
  for (long long  i = 3; i * i <= n; i += 2) {
    if (n % i == 0) {
      v.push_back(i);
      while (n % i == 0)n /= i;
    }
  }
  if (n > 2)v.push_back(n);
  return v;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);

long long x;
cin>>x;
vector<long long> factors=primeFactors(x);
// for(auto x:factors){
//     cout<<x<<" ";
//     }
//     cout<<endl;
// max(a,b)->minimum
// lcm(a,b)==x

vector<long long> arr;
for (long long i = 0; i <factors.size(); i++)
{
    long long temp=1;
    while((x%factors[i])==0){
            x=x/factors[i];
            temp=temp*factors[i];
    }
   arr.push_back(temp);
// cout<<"prime="<<factors[i]<<endl;
// cout<<temp<<endl;        
}


long long n=arr.size();
long long a=1;
long long b=1;
long long ans=1e16;
pair<long long,long long> p={1,x};
for (long long i = 1; i <(1<<n); i++)
{
    a=1;
    b=1;
    for (long long j = 0; j <n; j++)
    {
        if(i & (1<<j)){
            a=a*arr[j];
        }
        else{
            b=b*arr[j];
        }
    }

    if(max(a,b)<ans){
        ans=max(a,b);
        p={a,b};
    }
    
}

cout<<p.first<<" "<<p.second<<endl;



return 0;
}