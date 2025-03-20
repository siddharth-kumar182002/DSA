#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n];
int odd=0;
int even=0;

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    if(arr[i]%2==0){
        even++;
    }
    else{
        odd++;
    }
}

//cout<<"even="<<even<<endl;
//cout<<"odd="<<odd<<endl;

if(even==n ){
    cout<<"NO"<<endl;
}
else if(odd==n && n%2==0){
     cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}

}
return 0;
}