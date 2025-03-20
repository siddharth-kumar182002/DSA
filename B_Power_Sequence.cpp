#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n;
cin>>n;
vector<long long> arr(n);


for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}


sort(arr.begin(),arr.end());
long long mini= LONG_LONG_MAX;
long long y=0;
for (int i = 0; i <n; i++)
{
    y+=abs(arr[i]-1);
}
mini=min(mini,y);
for (int i = 2; pow(i,n-1) <=(arr[n-1]+y); i++)
{
    long long x=0;
    long long p=1;
    for (int j = 0; j < n; j++)
    {
        x+=abs(arr[j]-p);
        p=p*i;
    }
    mini=min(mini,x);
}

cout<<mini<<endl;


return 0;
}