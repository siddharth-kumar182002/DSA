#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
int max=arr[0];
int min=arr[0];
int c=0;
for (int i = 1; i < n; i++)
{

    if(arr[i]>max){
        max=arr[i];
        c++;
    }
    if(arr[i]<min){
        min=arr[i];
        c++;
    }
}
cout<<c<<endl;


return 0;
}