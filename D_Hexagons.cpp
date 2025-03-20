#include <bits/stdc++.h>
using namespace std;
int main() {
long long t;
cin>>t;
long long sum=1;
for (long long i = 1; i <=t; i++)
{
    sum=sum+6*i;
}
cout<<sum<<endl;

return 0;
}