#include <bits/stdc++.h>
using namespace std;
int main() {
    
long long n,t;
cin>>n>>t;

vector<long long> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

long long l=0;
long long x=0;
long long res=-1;


for (int r = 0; r < n; r++)
{
    x=x+arr[r];
    while(x>t){
        x=x-arr[l];
        l++;
    }
    //cout<<l<<" "<<r<<" "<<x<<endl;
    res=max(res,r-l+1);
}
cout<<res<<endl;
return 0;
}