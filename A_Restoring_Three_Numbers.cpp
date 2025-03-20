#include <bits/stdc++.h>
using namespace std;
int main() {
int arr[4];
for (int i = 0; i < 4; i++)
{
    cin>>arr[i];
}

sort(arr,arr+4);
int x=arr[3];

cout<<x-arr[0]<<" "<<x-arr[1]<<" "<<x-arr[2]<<" "<<endl;


return 0;
}