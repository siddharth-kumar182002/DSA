#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n;
cin>>n;
vector<long long> arr(n);
long long even=0;
long long ei=-1;
long long odd=0;
long long oi=-1;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    if(arr[i]%2==0){
        even++;
        ei=i;
    }
    else{
        odd++;
        oi=i;
    }
}
if(even<=odd){
    cout<<ei+1<<endl;
}
else{
    cout<<oi+1<<endl;
}
return 0;
}