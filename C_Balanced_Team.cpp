#include <bits/stdc++.h>
using namespace std;
int main() {
long long n;
cin>>n;

vector<long long> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

sort(arr.begin(),arr.end());

long long l=0;
long long res=0;
for (int i = 0; i < n; i++)
{
     while((arr[i]-arr[l])>5){
         l++;
     }
     res=max(res,i-l+1);

}
cout<<res<<endl;


return 0;
}