#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n];

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    

}
int x=arr[0];
for (int i = 0; i < n; i++)
{
    x=x|arr[i];
}
cout<<x<<endl;




}
return 0;
}