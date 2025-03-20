#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){

    int n;
    cin>>n;

    int arr[2*n];

    for (int i = 0; i < 2*n; i++)
    {
        cin>>arr[i];
    }
//cout<<"v="<<arr[6]<<endl;
    sort(arr,arr+2*n);
    //cout<<"v="<<arr[n]<<endl;

    

    cout<<(arr[n]-arr[n-1])<<endl;
    

}
return 0;
}