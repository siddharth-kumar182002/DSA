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

sort(arr.begin(),arr.end());

long long q;
cin>>q;
while(q--){
    long long temp;
    cin>>temp;
    cout << upper_bound(arr.begin(), arr.end(), temp) - arr.begin() <<endl;
   }

return 0;
}