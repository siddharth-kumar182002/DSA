#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n];

int count=0;
int maxi=0;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    if(arr[i]==0){
        count++;
        maxi=max(count,maxi);
    }
    else{
        count=0;
    }
}
/*cout<<endl;
for (int i = 0; i < n; i++)
{
    cout<<arr[i];
}
cout<<endl;*/
cout<<maxi<<endl;

}
return 0;
}