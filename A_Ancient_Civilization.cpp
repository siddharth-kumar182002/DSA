#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n,l;
cin>>n>>l;
int arr[n];
int x=((1<<l)-1);
cout<<"x="<<x<<endl;
for (int i = 0; i <n; i++)
{
    cin>>arr[i];
    x=(x&arr[i]);
}
cout<<x<<endl;




}
return 0;
}