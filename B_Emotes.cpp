#include <bits/stdc++.h>
using namespace std;
int main() {
long long n,m,k;
cin>>n>>m>>k;

vector<long long> v;
for (long long i = 0; i < n; i++)
{
    long long temp;
    cin>>temp;
    v.push_back(temp);
}

sort(v.begin(),v.end());

long long x=v[n-1];
long long y=v[n-2];
long long g=m/(k+1);
long long r=m%(k+1);

long long sum= (x*k+y)*g+r*x;
cout<<sum<<endl;
return 0;
}