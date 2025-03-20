#include <bits/stdc++.h>
using namespace std;
int main() {
long long n;
cin>>n;
vector<long long > arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

vector<long long > arr1(n+1,0),arr2(n+1,0);
for (int i = 1; i <=n; i++)
{
    arr1[i]=arr[i-1]+arr1[i-1];
}
sort(arr.begin(),arr.end());
for (int i = 1; i <=n; i++)
{
    arr2[i]=arr[i-1]+arr2[i-1];
}

long long m;
cin>>m;

while(m--){
    long long qn,l,r;
    cin>>qn>>l>>r;
    if(qn==1){
        cout<<arr1[r]-arr1[l-1]<<endl;
    }
    else{
        cout<<arr2[r]-arr2[l-1]<<endl;
    }
}



return 0;
}