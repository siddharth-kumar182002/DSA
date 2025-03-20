#include <bits/stdc++.h>
using namespace std;
int main() {
long long t;
cin>>t;
long long arr[t+1];
long long flag=0;
long long sum=0;

for (long long i = 1; i <=t; i++)
{
     cin>>arr[i];

}
long long count=arr[1];
for (long long i = 1; i < t; i++)
{
    long long x=arr[i]-arr[i+1];
    sum=sum+x;
    if(sum<0){
        count=count+abs(sum);
        sum=0;
    }

    
}

cout<<count<<endl;

return 0;
}