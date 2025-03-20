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
sort(arr,arr+n);

if(arr[0]!=1){
    cout<<"NO"<<endl;
}
else{
    int sum=1;
    int flag=0;
    for (int i = 1; i < n; i++)
    {
        if(arr[i]>sum){
            flag=1;
            cout<<"NO"<<endl;
        }
        sum=sum+arr[i];
    }

    if(flag==0){
        cout<<"YES"<<endl;
    }


    

}

}
return 0;
}